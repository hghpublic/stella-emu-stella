set(sources
    ConvolutionBuffer.cxx
    HighPass.cxx
    LanczosResampler.cxx
    SimpleResampler.cxx
)

target_sources(${target} PRIVATE ${sources})
