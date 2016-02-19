/*****************************************************************************
 * Visual K-Line Analysing System For Zen Theory
 * Copyright (C) 2016, Martin Tang

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef __CCENTROID_H__
#define __CCENTROID_H__

struct CCentroid
{
  bool  bValid;
  int   nTop1, nTop2, nTop3, nBot1, nBot2, nBot3;
  float fTop1, fTop2, fBot1, fBot2;
  int   nLines;
  int   nStart, nEnd;
  float fHigh, fLow, fPHigh, fPLow;

  CCentroid();
  ~CCentroid();

  bool PushHigh(int nIndex, float fValue);
  bool PushLow (int nIndex, float fValue);
};

#endif