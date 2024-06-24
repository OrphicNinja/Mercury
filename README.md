# MERCURY MOD MANAGER

*STILL IN DEVELOPMENT*

The goal of this is to create a centralized mod / collection of mods that work together to allow players to easily manage and update their mods. It will display their installed mods on a new tab in the main menu and inform them if a mod is outdated, giving them the option to update straight from the mods tab. This mod will also handle mod settings and allow mod authors to easily implement their own mod settings that can be used in their logic mods. 

This could eventually be included in zModLoader as MMM will utilise the same modmeta for the mod settings.


### Todo
- [ ] Mod settings page
   - [ ] Create a navbar for each detected mod
   - [ ] For each variable in the mod meta data asset, create a new settings adjuster widget

### In Progress 

- [ ] Download Manager Page
  - [ ] Create a base widget for mods in the download manager.
  - [ ] Update single mod button functionality in c++
    - [x] Check latest mod version on MWS or NexusMods
    - [x] Compared the current version with latest version
    - [x] Curl new version into UE4SS mods folder
    - [ ] Copy paks to /Mods with ".staged" as suffix to file name ( This will allow the hotswapping to occur )
    - [ ] Update all mods button functionality in c++
        - [ ] Get all outdated mods and run update single mod function on them


### Done ✓

- [x] Checking for updates
- [x] Update notifier widget on main menu to display how many mods are outdated
- [x] Mods button on navbar
- [x] Mod stack widget that holds the buttons for download manager, mod load order and mod settings; along with a widget switcher to display the different pages
- [x] Hot swapping Paks (experimental)
- [x] Restarting Mods from the main menu (quicker than loading into a heist and returning to menu) 
- [x] Mod loading order page and functionality

Notes:
Hot Loading sort of works, kinda maybe. Its experimental.


### HOW TO USE

1. Download [UE4SS 3.01](https://modworkshop.net/mod/47771) for PD3
2. Download [Logic Mod Loader](https://modworkshop.net/mod/44049). Currently a lot of mods cause crashes with the
latest version. Try using this [old version](https://drive.google.com/file/d/1WOpwp0hHY6JGL1G8cqVDqHbB-SEbH0zY/view) instead
3. Clone the repo and navigate to /Build
4. Extract the latest zip from /Build into your game root directory.
The location of this folder will vary depending on your installation preferences & storefront.
![STEAM.png](Imgs%2FSTEAM.png)
![EGS.png](Imgs%2FEGS.png)
5. Navigate to the UE4SS Mods folder (typically at ```{GamePath}\PAYDAY3\PAYDAY3\Binaries\Win64``` or ```{GamePath}\PAYDAY3\PAYDAY3\Binaries\WinGDK```)
6. Edit the mods.txt and add ```MercuryModManager : 1``` 
7. Open the game once and quit. The mod manager should have created a "/Mercury/Mods" directory in the games root folder.
This folder is where the mod manager will mount and unmount paks from.
8. Put all your mods except for (MercuryModManager_P.pak and zModLoader.pak) in this new folder.
9. Play the game! 

You can edit the mod loading order list from the menu. Once the list is changed and applied, it is recommended that you restart the game to ensure all
assets are effected by the change. You can also edit the load order from the "ModLoadOrder.txt" in the /Mercury directory.

To hotswap a mod, rename the updated pak with '.staged' at the end and add it to the /Mods folder.
The mod manager will detect this change and replace the old pak with the new one. This is very experimental. 
The affected assets need to be reloaded e.g: if you are currently in a heist, quit to the main menu then reload the heist.
