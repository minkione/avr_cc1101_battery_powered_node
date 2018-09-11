/**
 * Copyright (c) 2011 panStamp <contact@autonity.de>
 * 
 * This file is part of the spaxxity project.
 * 
 * panStamp  is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * any later version.
 * 
 * panStamp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with panStamp; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 
 * USA
 * 
 * Author: Daniel Berenguer, Lucian Nutiu 
 * Creation date: 03/03/2011
 */

#include "swcommand.h"
#include "spaxstack.h"

/**
 * SWCOMMAND
 * 
 * Class constructor
 * 
 * 'dAddr'	  Destination address
 * 'secNonce'	Security nonce
 * 'rAddr'	  Register address
 * 'rId'	    Register id
 * '*val'	    New value
 * 'len'	    Buffer length
 */
SWCOMMAND::SWCOMMAND(byte dAddr, byte secNonce, byte rAddr, byte rId, byte *val, byte len)
{
  destAddr = dAddr;
  srcAddr = panstamp.cc1101.devAddress;
  hop = 0;
  security = panstamp.security & 0x0F;
  nonce = secNonce;
  function = SWAPFUNCT_CMD;
  regAddr = rAddr;
  regId = rId;
  value.data = val;
  value.length = len;
}

