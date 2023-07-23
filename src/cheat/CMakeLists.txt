set(sources
    BankRomCheat.cxx
    BankRomCheat.hxx
    CheatCodeDialog.cxx
    CheatCodeDialog.hxx
    Cheat.hxx
    CheatManager.cxx
    CheatManager.hxx
    CheetahCheat.cxx
    CheetahCheat.hxx
    RamCheat.cxx
    RamCheat.hxx
)

target_sources(${target} PRIVATE ${sources})
