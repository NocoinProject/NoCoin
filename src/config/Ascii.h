// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, The Nocoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n    _   _            _____           _         /n"
      "     | \ | |          / ____|         (_)        /n"
      "     |  \| |   ___   | |        ___    _   _ __  /n"
      "     | . ` |  / _ \  | |       / _ \  | | | '_ \ /n"
      "     | |\  | | (_) | | |____  | (_) | | | | | | |/n"
      "     |_| \_|  \___/   \_____|  \___/  |_| |_| |_| /n";

const std::string nonWindowsAsciiArt = 
      "\n    _   _            _____           _         /n"
      "     | \ | |          / ____|         (_)        /n"
      "     |  \| |   ___   | |        ___    _   _ __  /n"
      "     | . ` |  / _ \  | |       / _ \  | | | '_ \ /n"
      "     | |\  | | (_) | | |____  | (_) | | | | | | |/n"
      "     |_| \_|  \___/   \_____|  \___/  |_| |_| |_| /n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
