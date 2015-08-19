/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T08:59:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"

void CAST_Int_to_Q_LOCACC_reset_TM_conversions(
  outC_CAST_Int_to_Q_LOCACC_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_LOCACC */
void CAST_Int_to_Q_LOCACC_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc_int */kcg_int q_locacc_int,
  outC_CAST_Int_to_Q_LOCACC_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  
  outC->_L11 = 0;
  outC->_L10 = 63;
  outC->_L1 = q_locacc_int;
  outC->_L9 = outC->_L1 > outC->_L10;
  outC->_L8 = outC->_L1 < outC->_L11;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->q_locacc = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LOCACC_TM_conversions.c
** Generation date: 2015-08-11T08:59:25
*************************************************************$ */

