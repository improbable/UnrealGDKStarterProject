@echo off
call "%~dp0ProjectPaths.bat"
"%UNREAL_HOME%\Engine\Binaries\Win64\UE4Editor.exe" "%~dp0%PROJECT_PATH%\%GAME_NAME%.uproject" StreamingGym -server -log -workerType UnrealWorker -stdout -nowrite -unattended -nologtimes -nopause -noin -messaging -SaveToUserDir -NoVerifyGC
