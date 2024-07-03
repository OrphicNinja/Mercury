# MERCURY MOD MANAGER

*STILL IN DEVELOPMENT*

The goal of this is to create a centralized mod / collection of mods that work together to allow players to easily manage and update their mods. It will display their installed mods on a new tab in the main menu and inform them if a mod is outdated, giving them the option to update straight from the mods tab. This mod will also handle mod settings and allow mod authors to easily implement their own mod settings that can be used in their logic mods. 

### HOW TO USE

1. Download [UE4SS 3.01](https://modworkshop.net/mod/47771) for PD3
2. Download [Logic Mod Loader](https://modworkshop.net/mod/44049). Currently a lot of mods cause crashes with the
latest version. Try using this [old version](https://drive.google.com/file/d/1WOpwp0hHY6JGL1G8cqVDqHbB-SEbH0zY/view) instead
3. Clone the repo and navigate to /Build
4. Extract the latest zip from /Build into your game root directory. IF YOU ARE ON GAMEPASS, YOU WILL NEED TO NAVIGATE TO THE WIN64 FOLDER AND MOVE THE MODS FOLDER FROM INSIDE IT TO YOUR WINGDK FOLDER!!!
The location of this folder will vary depending on your installation preferences & storefront.
![STEAM.png](Imgs%2FSTEAM.png)
![EGS.png](Imgs%2FEGS.png)
5. Navigate to the UE4SS Mods folder (typically at ```{GamePath}\PAYDAY3\PAYDAY3\Binaries\Win64``` or ```{GamePath}\PAYDAY3\PAYDAY3\Binaries\WinGDK```)
6. Edit the mods.txt and add ```MercuryModManager : 1``` 
7. Open the game once and quit. The mod manager should have created a "/Mercury/Mods" directory in the games root folder.
This folder is where the mod manager will mount and unmount paks from.
8. Put all your mods (except for MercuryModManager_P.pak and zModLoader.pak, these go in the usual ~mods folder) in this new folder.
9. Play the game! 

You can edit the mod loading order list from the menu. Once the list is changed and applied, it is recommended that you restart the game to ensure all
assets are effected by the change. You can also edit the load order from the "ModLoadOrder.txt" in the /Mercury directory.

### GUIDES FOR MOD MAKERS

[How to make your mod compatible with Mercury](https://github.com/OrphicNinja/Mercury/blob/main/COMPATABILTY.md)

[How to create mod settings](https://github.com/OrphicNinja/Mercury/blob/main/SETTINGS.md)

### SOURCE PROJECT

[XMAKE-REPO > Dev branch](https://github.com/xmake-io/xmake-repo) is needed as an additional library when building with xmake. This is mainly for the 11zip include.
