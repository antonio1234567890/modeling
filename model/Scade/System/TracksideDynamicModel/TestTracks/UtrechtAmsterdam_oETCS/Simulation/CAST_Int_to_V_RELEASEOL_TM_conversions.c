/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:16:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conversions.h"

void CAST_Int_to_V_RELEASEOL_reset_TM_conversions(
  outC_CAST_Int_to_V_RELEASEOL_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_V_RELEASEOL */
void CAST_Int_to_V_RELEASEOL_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol_int */kcg_int v_releaseol_int,
  outC_CAST_Int_to_V_RELEASEOL_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  
  outC->_L1 = v_releaseol_int;
  outC->_L7 = 120;
  outC->_L9 = outC->_L1 > outC->_L7;
  outC->_L13 = 126;
  outC->_L15 = outC->_L1 != outC->_L13;
  outC->_L14 = 127;
  outC->_L16 = outC->_L1 != outC->_L14;
  outC->_L17 = outC->_L9 & outC->_L15 & outC->_L16;
  outC->_L12 = 5;
  outC->_L11 = outC->_L1 * outC->_L12;
  outC->_L6 = 0;
  outC->_L8 = outC->_L1 < outC->_L6;
  _1_noname = outC->_L8;
  noname = outC->_L17;
  outC->v_releaseol = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_RELEASEOL_TM_conversions.c
** Generation date: 2015-08-27T15:16:32
*************************************************************$ */
