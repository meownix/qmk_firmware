![SofleKeyboard default keymap](https://github.com/josefadamcik/SofleKeyboard/raw/master/Images/soflekeyboard.png)
![SofleKeyboard adjust layer](https://github.com/josefadamcik/SofleKeyboard/raw/master/Images/soflekeyboard_layout_adjust.png)


# VimfanTPdvorak Sofle RGB keymap

Build with `qmk compile -kb sofle/rev1 -km VimfanTPdvorak`.
The firmware keeps the right half as USB master, the Bongo Cat/WPM OLED,
QWERTY/Colemak-DH/Dvorak layouts, media controls, and the mouse layer.

## RGB lighting

The RGB configuration matches the recovered seller firmware: WS2812-compatible
LEDs on D3, with 72 configured LEDs split 36 per half. Static lighting,
breathing, rainbow mood (color cycling), and rainbow swirl are enabled.
The initial brightness is 32/255 and the
maximum is capped at 120/255. Saved EEPROM settings can override the initial
brightness and enabled state.

Hold both **Lower and Raise** thumb keys to access Adjust. Use the physical top
row on the left half, counting from its outer left edge, regardless of what the
keys normally type:

| Physical key position | Action |
| --- | --- |
| 1st (normally grave) | Unused |
| 2nd (normally 1) | Toggle RGB |
| 3rd (normally 2) | Previous hue |
| 4th (normally 3) | Next hue |
| 5th (normally 4) | Lower brightness |
| 6th (normally 5) | Raise brightness |

While holding **Lower and Raise**, the right half's top row adds these controls,
counting from its inner edge beside the OLED toward its outer right edge:

| Physical key position | Action |
| --- | --- |
| 1st (normally 6) | Previous effect |
| 2nd (normally 7) | Next effect |
| 3rd (normally 8) | Decrease QMK's generic speed setting |
| 4th (normally 9) | Increase QMK's generic speed setting |

Effect cycling includes static lighting and the animation families' built-in
speed/direction variants. In this QMK revision, these effects use their mode
variants for visible speed changes; the generic speed setting saved by keys
8/9 does not change their timing. Use keys 6/7 to select a faster/slower variant.
Hue controls select the color for static/breathing;
rainbow effects choose their own hue. Brightness controls apply to static and
rainbow effects; QMK breathing uses its own pulse envelope, capped at 120/255.
The saved static mode stays static after updating; use Next effect to animate.

These controls save their settings. Existing layout selection, mouse selection,
bootloader, and media keys on Adjust stay in their original positions.

Flash the same firmware onto both halves, one at a time. Disconnect USB power
before changing the cable between halves. During normal use, connect USB to the
right half.

## OLED displays

The right status display uses fixed rows and clears the full buffer when its
status changes, keeping blank areas clean without preventing the idle timeout.
Caps Lock is highlighted according to the host's LED state. Its binding is
**Raise alone + the far-right key on the left home row**.

The left Bongo Cat display has a shortened table line and clears once when
returning to the QMK logo, avoiding leftover pixels along the display edge.
Its frame arrays use the actual 512-byte OLED frame size rather than reserving
unused padding, leaving flash space for the RGB effects without removing frames.

The AVR WS2812 driver rejects indices outside its LED buffer. Split clipping
can wrap indices belonging to the other half; ignoring those writes prevents
RGB animations from corrupting nearby OLED memory.

## Original layout reference

Layout in [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/76efb423a46cbbea75465cb468eef7ff) and [adjust layer](http://www.keyboard-layout-editor.com/#/gists/4bcf66f922cfd54da20ba04905d56bd4)


Features:

- Symmetric modifiers (CMD/Super, Alt/Opt, Ctrl, Shift)
- Various modes, can be switched (using Adjust layer and the selected one is stored in EEPROM.
- Modes for Qwerty and Colemak support
- Modes for Mac vs Linux/Win support -> different order of modifiers and different action shortcuts on the "UPPER" layer (the red one in the image). Designed to simplify transtions when switching between operating systems often.
- The OLED on master half shows selected mode and caps lock state and is rotated.
- Left encoder controls volume up/down/mute. Right encoder PGUP/PGDOWN.


