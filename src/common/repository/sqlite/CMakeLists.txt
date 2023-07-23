set(sources
    AbstractKeyValueRepositorySqlite.cxx
    AbstractKeyValueRepositorySqlite.hxx
    CompositeKeyValueRepositorySqlite.cxx
    CompositeKeyValueRepositorySqlite.hxx
    KeyValueRepositorySqlite.cxx
    KeyValueRepositorySqlite.hxx
    SqliteDatabase.cxx
    SqliteDatabase.hxx
    SqliteError.hxx
    SqliteStatement.cxx
    SqliteStatement.hxx
    SqliteTransaction.cxx
    SqliteTransaction.hxx
    StellaDb.cxx
    StellaDb.hxx
)

target_sources(${target} PRIVATE ${sources})
target_link_libraries(${target} PRIVATE sqlite3)
