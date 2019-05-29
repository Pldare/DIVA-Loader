# DIVA Loader

**DIVA Loader** lets you load plugins into **Hatsune Miku Project DIVA Arcade Future Tone** by placing them into the **"plugins"** folder.

## Installation

Download the latest release.\
Decompress everything into the **root folder** of the game.

## Usage

Use the **"plugins\config.ini"** to enable or disable plugins loading.\
Place any **Dynamic-link library (DLL)** with the filename extension as **".dva"** inside the **"plugins"** folder, **TLAC v2.0** is included by default.\
Launch **"diva.exe"** with your desired parameters (e.g. **"-w -hdtv1080"**).

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)

## FAQ

**"Prepatch"** is not included yet.

Configuration files for **TLAC** and any other extension will be read from **"plugins\"** and **NOT** from the root folder of the game.

This is a stripdown of [**ThirteenAG's** Ultimate ASI Loader v4.47](https://github.com/ThirteenAG/Ultimate-ASI-Loader/) for **"dinput8.dll"** usage only with minor modifications.

[TLAC (TotallyLegitArcadeController) v2.0](https://github.com/samyuu/TotallyLegitArcadeController) by **Samyuu**.

Solution for Visual Studio 2019 platform toolset v142 and Windows 10 SDK (10.0.17763.0).

Requires Windows Universal CRT SDK.
