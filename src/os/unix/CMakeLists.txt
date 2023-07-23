# unix

set(sources
    FSNodePOSIX.cxx
    FSNodePOSIX.hxx
    OSystemUNIX.cxx
    OSystemUNIX.hxx
    SerialPortUNIX.cxx
    SerialPortUNIX.hxx
)

target_sources(${target} PRIVATE ${sources})

# add_subdirectory(r77)
