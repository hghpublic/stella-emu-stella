//============================================================================
//
//   SSSS    tt          lll  lll
//  SS  SS   tt           ll   ll
//  SS     tttttt  eeee   ll   ll   aaaa
//   SSSS    tt   ee  ee  ll   ll      aa
//      SS   tt   eeeeee  ll   ll   aaaaa  --  "An Atari 2600 VCS Emulator"
//  SS  SS   tt   ee      ll   ll  aa  aa
//   SSSS     ttt  eeeee llll llll  aaaaa
//
// Copyright (c) 1995-2025 by Bradford W. Mott, Stephen Anthony
// and the Stella Team
//
// See the file "License.txt" for information on usage and redistribution of
// this file, and for a DISCLAIMER OF ALL WARRANTIES.
//============================================================================

#ifndef CARTRIDGEF8SC_HXX
#define CARTRIDGEF8SC_HXX

#include "CartF8.hxx"
#ifdef DEBUGGER_SUPPORT
  #include "CartF8SCWidget.hxx"
#endif

/**
  Cartridge class used for Atari's 8K bankswitched games with 128 bytes of
  RAM.  There are two 4K banks, accessible by read/write to $1FF8 - $1FF9.
  RAM read port is $1080 - $10FF, write port is $1000 - $107F.

  @author  Bradford W. Mott, Thomas Jentzsch
*/
class CartridgeF8SC : public CartridgeF8
{
  friend class CartridgeF8SCWidget;

  public:
    /**
      Create a new cartridge using the specified image

      @param image     Pointer to the ROM image
      @param size      The size of the ROM image
      @param md5       The md5sum of the ROM image
      @param settings  A reference to the various settings (read-only)
      @param bsSize    The size specified by the bankswitching scheme
    */
    CartridgeF8SC(const ByteBuffer& image, size_t size, string_view md5,
                  const Settings& settings, size_t bsSize = 8_KB);
    ~CartridgeF8SC() override = default;

  public:
    /**
      Query whether the cart RAM allows code execution.

      @return  true, if code execution is allowed
    */
    bool executableCartRam() const override { return false; }

    /**
      Get a descriptor for the device name (used in error checking).

      @return The name of the object
    */
    string name() const override { return "CartridgeF8SC"; }

  #ifdef DEBUGGER_SUPPORT
    /**
      Get debugger widget responsible for accessing the inner workings
      of the cart.
    */
    CartDebugWidget* debugWidget(GuiObject* boss, const GUI::Font& lfont,
        const GUI::Font& nfont, int x, int y, int w, int h) override
    {
      return new CartridgeF8SCWidget(boss, lfont, nfont, x, y, w, h, *this);
    }
  #endif

  private:
    // RAM size
    static constexpr size_t RAM_SIZE = 0x80;

  private:
    // Following constructors and assignment operators not supported
    CartridgeF8SC() = delete;
    CartridgeF8SC(const CartridgeF8SC&) = delete;
    CartridgeF8SC(CartridgeF8SC&&) = delete;
    CartridgeF8SC& operator=(const CartridgeF8SC&) = delete;
    CartridgeF8SC& operator=(CartridgeF8SC&&) = delete;
};

#endif
