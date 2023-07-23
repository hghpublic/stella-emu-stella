# library elf

target_sources(${target} PRIVATE
    BusTransactionQueue.cxx
    BusTransactionQueue.hxx
    ElfEnvironment.cxx
    ElfEnvironment.hxx
    ElfFile.hxx
    ElfLinker.cxx
    ElfLinker.hxx
    ElfParser.cxx
    ElfParser.hxx
    ElfUtil.cxx
    ElfUtil.hxx
    # EncodingTest.cxx
    # LinkerTest.cxx
    VcsLib.cxx
    VcsLib.hxx
)
