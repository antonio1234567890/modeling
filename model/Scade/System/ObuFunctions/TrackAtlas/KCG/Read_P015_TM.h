/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Read_P015_TM_H_
#define _Read_P015_TM_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "C_P015_compr_onboard_TM_conversions.h"

/* =====================  no input structure  ====================== */


/* TM::Read_P015 */
extern void Read_P015_TM(
  /* TM::Read_P015::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM::Read_P015::received */kcg_bool *received,
  /* TM::Read_P015::P015_OBU_out */P015_OBU_T_TM *P015_OBU_out);

#endif /* _Read_P015_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P015_TM.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

