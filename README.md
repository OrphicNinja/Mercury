# PD3-ModManager

STILL IN DEVELOPMENT 

The goal of this is to create a centralized mod / collection of mods that work together to allow players to easily manage and update their mods. It will display their installed mods on a new tab in the main menu and inform them if a mod is outdated, giving them the option to update straight from the mods tab. This mod will also handle mod settings and allow mod authors to easily implement their own mod settings that can be used in their logic mods. 

This could eventually be included in zModLoader as MMM will utilise the same modmeta for the mod settings.


### Todo

- [ ] Mod settings page
   - [ ] Create a navbar for each detected mod
   - [ ] For each variable in the mod meta data asset, create a new settings adjuster widget 

- [ ] Mod loading order page
   - [ ] Setup a base widget for each detectrd pak
   - [ ] Setup a list widget that displays each pack in order
   - [ ] Allow the player to modify the order of this list by using Up and Down buttons or drag and drop
   - [ ] On applied, Unmount all paks and remount them in the new order (Possibly have to restart game here)



### In Progress 

- [ ] Create a base widget for mods in the download manager.
   - This will have an icon, the mod name, mod      version and a button to update the mod. There will also be a progress bar to show download progression when updating.  

### Done ✓

- [x] Checking for updates
- [x] Update notifier widget on main menu to display how many mods are outdated
- [x] Mods button on navbar
- [x] Mod stack widget that holds the buttons for download manager, mod load order and mod settings; along with a widget switcher to display the different pages
- [x] Hot swapping Paks (experimental)

Notes:
Hot Loading sort of works, kinda maybe. Its experimental.


