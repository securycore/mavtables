// MAVLink router and firewall.
// Copyright (C) 2017  Michael R. Shannon <mrshannon.aerospace@gmail.com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#include <iostream>
#include "config.hpp"
#include "util.hpp"


int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    std::cout << NAME << ": v"
              << VERSION_MAJOR << "."
              << VERSION_MINOR << "."
              << VERSION_PATCH << std::endl;
    std::cout << capital_case("a MAVLink router and firewall.") << std::endl;
}
