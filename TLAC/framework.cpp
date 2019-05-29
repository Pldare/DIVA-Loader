#include "framework.h"
#include <filesystem>

namespace TLAC
{
	typedef std::filesystem::path fspath;

	std::string *framework::moduleDirectory;

	const wchar_t* framework::DivaWindowName = L"Hatsune Miku Project DIVA Arcade Future Tone";
	const wchar_t* framework::GlutDefaultName = L"GLUT";

	HWND framework::DivaWindowHandle;
	HMODULE framework::Module;

	std::string framework::GetModuleDirectory()
	{
		if (moduleDirectory == nullptr)
		{
			CHAR modulePathBuffer[MAX_PATH];
			GetModuleFileNameA(framework::Module, modulePathBuffer, MAX_PATH);

			fspath configPath = fspath(modulePathBuffer).parent_path();
			moduleDirectory = new std::string(configPath.u8string());
		}

		return *moduleDirectory;
	}

	RECT framework::GetWindowBounds()
	{
		RECT windowRect;
		GetWindowRect(DivaWindowHandle, &windowRect);

		return windowRect;
	}
}