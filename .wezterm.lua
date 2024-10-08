--Pull in the wezterm api
local wezterm = require("wezterm")

local config = wezterm.config_builder()

-- config.font = wezterm.font("JetBrains Mono")

config.font = wezterm.font("JetBrains Mono", { weight = 700 }) -- Set weight to bold (700)

config.font_size = 18

--keep adding configuaration  options here

config.enable_tab_bar = false
-- Ctrl + Shift + T  => new tab   -> Ctrl + tab => switching bewteen tabs

config.window_decorations = "TITLE | RESIZE"

-- my coolnight colorscheme:
config.colors = {
	foreground = "#CBE0F0",
	background = "#011423",
	cursor_bg = "#47FF9C",
	cursor_border = "#47FF9C",
	cursor_fg = "#011423",
	selection_bg = "#033259",
	selection_fg = "#CBE0F0",
	ansi = { "#214969", "#E52E2E", "#44FFB1", "#FFE073", "#0FC5ED", "#a277ff", "#24EAF7", "#24EAF7" },
	brights = { "#214969", "#E52E2E", "#44FFB1", "#FFE073", "#A277FF", "#a277ff", "#24EAF7", "#24EAF7" },
}

-- config.window_background_opacity = 0.7 -- 80% opaque, 20% translucent
config.text_background_opacity = 0.7 -- Keep text background fully opaque
-- Optional: Disable bold text transparency if you want bold to stay solid
-- config.bold_brightens_ansi_colors = true
config.window_background_image = "/home/cmd/Pictures/omNamahShivay.png"
config.window_background_image_hsb = {
	brightness = 0.5, -- Adjust brightness of the image. 1.0 is full brightness, lower values dim the image.
	hue = 1.0, -- Adjust hue; 1.0 retains the original hue.
	saturation = 1.0, -- Adjust saturation; 1.0 is fully saturated.
}


return config
