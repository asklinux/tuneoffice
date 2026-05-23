## Overview

Count words, characters (with/without spaces), and paragraphs in the selected part of your document. 

The plugin is compatible with [self-hosted](https://github.com/TUNEOFFICE/DocumentServer) and [desktop](https://github.com/TUNEOFFICE/DesktopEditors) versions of TUNEOFFICE editors. It can be added to TUNEOFFICE instances manually. 

## How to use

1. Select the text.
2. Open the Plugins tab and click "Count words and characters".

## How to install

Detailed instructions can be found in [TUNEOFFICE API documentation](https://api.tuneoffice.com/docs/plugin-and-macros/tutorials/installing/tuneoffice-docs-on-premises/).

## Known issues

* Footnotes/endnotes symbols are not included in the word count (bug #47828 in the internal bug tracker)
* Numbers from numbered lists are included in the word count (#47805)
* Page numbers are not included (#47809)
