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

#include "CartJANE.hxx"

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
CartridgeJANE::CartridgeJANE(const ByteBuffer& image, size_t size,
                             string_view md5, const Settings& settings,
                             size_t bsSize)
  : CartridgeEnhanced(image, size, md5, settings, bsSize)
{
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
bool CartridgeJANE::checkSwitchBank(uInt16 address, uInt8)
{
  // Switch banks if necessary
  switch (address)
  {
  case 0x1FF0:
    // Set the current bank to the 1st 4k bank
    bank(0);
    return true;

  case 0x1FF1:
    // Set the current bank to the 2nd 4k bank
    bank(1);
    return true;

  case 0x1FF8:
    // Set the current bank to the 3rd 4k bank
    bank(2);
    return true;

  case 0x1FF9:
    // Set the current bank to the 4th 4k bank
    bank(3);
    return true;

  default:
    break;
  }
  return false;
}
