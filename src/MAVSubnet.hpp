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


#ifndef MAVSUBNET_HPP_
#define MAVSUBNET_HPP_


#include <string>

#include "MAVAddress.hpp"


class MAVSubnet
{
    private:
        MAVAddress address_;
        unsigned int mask_;

    public:
        /** Copy constructor.
         *
         * \param other MAVLink address to copy.
         */
        MAVSubnet(const MAVSubnet &other) = default;
        MAVSubnet(const MAVAddress &address, unsigned int mask = 0xFFFF);
        MAVSubnet(const MAVAddress &address, unsigned int system_mask,
                  unsigned int component_mask);
        MAVSubnet(std::string address);
        bool contains(const MAVAddress &address) const;
        /** Assignment operator.
         *
         * \param other MAVLink address to copy.
         */
        MAVSubnet &operator=(const MAVSubnet &other) = default;

        friend bool operator==(const MAVSubnet &lhs, const MAVSubnet &rhs);
        friend bool operator!=(const MAVSubnet &lhs, const MAVSubnet &rhs);
        friend std::ostream &operator<<(std::ostream &os,
                                        const MAVSubnet &mavsubnet);
};


bool operator==(const MAVSubnet &lhs, const MAVSubnet &rhs);
bool operator!=(const MAVSubnet &lhs, const MAVSubnet &rhs);
std::ostream &operator<<(std::ostream &os, const MAVSubnet &mavsubnet);


#endif // MAVSUBNET_HPP_
