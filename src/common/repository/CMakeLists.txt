set(sources
    CompositeKeyValueRepository.cxx
    CompositeKeyValueRepository.hxx
    CompositeKeyValueRepositoryNoop.hxx
    CompositeKVRJsonAdapter.cxx
    CompositeKVRJsonAdapter.hxx
    KeyValueRepositoryConfigfile.cxx
    KeyValueRepositoryConfigfile.hxx
    KeyValueRepositoryFile.hxx
    KeyValueRepository.hxx
    KeyValueRepositoryJsonFile.cxx
    KeyValueRepositoryJsonFile.hxx
    KeyValueRepositoryNoop.hxx
    KeyValueRepositoryPropertyFile.cxx
    KeyValueRepositoryPropertyFile.hxx
)

target_sources(${target} PRIVATE ${sources})

add_subdirectory(sqlite)
