set(target common)
add_library(${target} STATIC)
target_sources(${target} PRIVATE
	AudioQueue.cxx
	AudioSettings.cxx
	Base.cxx
	Bezel.cxx
	DevSettingsHandler.cxx
	EventHandlerSDL.cxx
	FBBackendSDL.cxx
	FBSurfaceSDL.cxx
	FpsMeter.cxx
	FSNodeZIP.cxx
	HighScoresManager.cxx
	JoyMap.cxx
	JPGLibrary.cxx
	KeyMap.cxx
	Logger.cxx
	main.cxx
	MouseControl.cxx
	PaletteHandler.cxx
	PhosphorHandler.cxx
	PhysicalJoystick.cxx
	PJoystickHandler.cxx
	PKeyboardHandler.cxx
	PNGLibrary.cxx
	RewindManager.cxx
	SoundSDL.cxx
	StaggeredLogger.cxx
	StateManager.cxx
	ThreadDebugging.cxx
	TimerManager.cxx
	VideoModeHandler.cxx
	ZipHandler.cxx
)
