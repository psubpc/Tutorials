# Sublime Text 3 with Vue
This is a list of plugins that can be use in Sublime Text 3 in developing Vue.js Application
## Must Have
 - **[Terminus](https://packagecontrol.io/packages/Terminus)**
 - **[Vuejs Complete Package](https://packagecontrol.io/packages/Vuejs%20Complete%20Packages)**
 - **[Vuejs Snippets](https://packagecontrol.io/packages/Vuejs%20Snippets)**
 - **[JsPrettier](https://packagecontrol.io/packages/JsPrettier)**
 - **[HTML-CSS-JS Prettify](https://packagecontrol.io/packages/HTML-CSS-JS%20Prettify)**
## Optional
 - **[A File Icon](https://packagecontrol.io/packages/A%20File%20Icon)**
 - **[Theme - One](https://packagecontrol.io/packages/Theme%20-%20One)**
 - **[Theme - One Dark](https://packagecontrol.io/packages/Theme%20-%20One%20Dark)**

## Configs
### Terminus
Key binding for Terminus
```json
{ 
  "keys": ["ctrl+`"], "command": "toggle_terminus_panel", "args": {
    "cwd": "$folder"
  }
}
```
### My Prefered Keybindings
```json
[
	{ "keys": ["ctrl+`"], "command": "toggle_terminus_panel", "args": {"cwd": "$folder"}},
	{ "keys": ["ctrl+shift+w"], "command": "close_all" },
	{ "keys": ["ctrl+shift+l"], "command": "find_all_under" },
	{ "keys": ["ctrl+f2"], "command": "find_all_under" },
	{ "keys": ["alt+shift+i"], "command": "split_selection_into_lines" },
	{ "keys": ["ctrl+b"], "command": "toggle_side_bar" },
	{ "keys": ["ctrl+shift+b"], "command": "build" },
	{ "keys": ["alt+up"], "command": "swap_line_up" },
	{ "keys": ["alt+down"], "command": "swap_line_down" },
	{ "keys": ["ctrl+w"], "command": "close_file" },
]
```
