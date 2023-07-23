# library debugger

set(sources
    BreakpointMap.cxx
    BreakpointMap.hxx
    CartDebug.cxx
    CartDebug.hxx
    CpuDebug.cxx
    CpuDebug.hxx
    Debugger.cxx
    DebuggerExpressions.hxx
    Debugger.hxx
    DebuggerParser.cxx
    DebuggerParser.hxx
    DebuggerSystem.hxx
    DiStella.cxx
    DiStella.hxx
    Expression.hxx
    RiotDebug.cxx
    RiotDebug.hxx
    TIADebug.cxx
    TIADebug.hxx
    TimerMap.cxx
    TimerMap.hxx
    TrapArray.hxx
)

set(target debugger)
add_library(${target})
target_sources(${target} PRIVATE ${sources})
target_link_libraries(${target} PRIVATE json)

add_subdirectory(gui)
add_subdirectory(yacc)
