// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n                                                                                        \n"
  "    ____  ____  ____  _____________________  ____  ____  ____     __________  _____   __\n"
  "   / __ )/ __ \/ __ \/ ___/_  __/ ____/ __ \/ __ \/ __ \/ __ \   / ____/ __ \/  _/ | / /\n"
  "  / __  / / / / / / /\__ \ / / / __/ / / / / /_/ / /_/ / / / /  / /   / / / // //  |/ / \n"
  " / /_/ / /_/ / /_/ /___/ // / / /___/ /_/ / ____/ _, _/ /_/ /  / /___/ /_/ // // /|  /  \n"
  "/_____/\____/\____//____//_/ /_____/_____/_/   /_/ |_|\____/   \____/\____/___/_/ |_/   \n";





const std::string nonWindowsAsciiArt =
"\n                                                                                        \n"
  "    ____  ____  ____  _____________________  ____  ____  ____     __________  _____   __\n"
  "   / __ )/ __ \/ __ \/ ___/_  __/ ____/ __ \/ __ \/ __ \/ __ \   / ____/ __ \/  _/ | / /\n"
  "  / __  / / / / / / /\__ \ / / / __/ / / / / /_/ / /_/ / / / /  / /   / / / // //  |/ / \n"
  " / /_/ / /_/ / /_/ /___/ // / / /___/ /_/ / ____/ _, _/ /_/ /  / /___/ /_/ // // /|  /  \n"
  "/_____/\____/\____//____//_/ /_____/_____/_/   /_/ |_|\____/   \____/\____/___/_/ |_/   \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
