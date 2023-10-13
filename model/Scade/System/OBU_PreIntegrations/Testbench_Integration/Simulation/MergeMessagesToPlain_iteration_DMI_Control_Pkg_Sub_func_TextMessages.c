/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration/ */
void MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  array_char_30_5 *acc,
  /* DefaultMsgQueue/ */
  array_char_30_5 *DefaultMsgQueue,
  /* num1/ */
  kcg_int64 num1,
  /* MsgQueue2/ */
  array_char_30_5 *MsgQueue2,
  /* num2/ */
  kcg_int64 num2,
  /* MsgQueue3/ */
  array_char_30_5 *MsgQueue3,
  /* num3/ */
  kcg_int64 num3,
  /* MsgQueue4/ */
  array_char_30_5 *MsgQueue4,
  /* num4/ */
  kcg_int64 num4,
  /* MsgQueue5/ */
  array_char_30_5 *MsgQueue5,
  /* num5/ */
  kcg_int64 num5,
  /* MsgQueue6/ */
  array_char_30_5 *MsgQueue6,
  /* num6/ */
  kcg_int64 num6,
  /* MsgQueue7/ */
  array_char_30_5 *MsgQueue7,
  /* num7/ */
  kcg_int64 num7,
  /* MsgQueue8/ */
  array_char_30_5 *MsgQueue8,
  /* num8/ */
  kcg_int64 num8,
  /* MsgQueue9/ */
  array_char_30_5 *MsgQueue9,
  /* num9/ */
  kcg_int64 num9,
  /* MsgQueue10/ */
  array_char_30_5 *MsgQueue10,
  /* scrollLevel/ */
  kcg_int64 scrollLevel,
  outC_MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L554 = scrollLevel;
  outC->_L495 = index;
  outC->_L555 = outC->_L495 + outC->_L554;
  outC->_L552 = scrollLevel;
  outC->_L480 = index;
  outC->_L553 = outC->_L480 + outC->_L552;
  outC->_L550 = scrollLevel;
  outC->_L456 = index;
  outC->_L551 = outC->_L456 + outC->_L550;
  outC->_L548 = scrollLevel;
  outC->_L438 = index;
  outC->_L549 = outC->_L438 + outC->_L548;
  outC->_L546 = scrollLevel;
  outC->_L429 = index;
  outC->_L547 = outC->_L429 + outC->_L546;
  outC->_L544 = scrollLevel;
  outC->_L417 = index;
  outC->_L545 = outC->_L417 + outC->_L544;
  outC->_L542 = scrollLevel;
  outC->_L391 = index;
  outC->_L543 = outC->_L391 + outC->_L542;
  outC->_L540 = scrollLevel;
  outC->_L381 = index;
  outC->_L541 = outC->_L381 + outC->_L540;
  outC->_L537 = scrollLevel;
  outC->_L367 = index;
  outC->_L539 = outC->_L367 + outC->_L537;
  outC->_L535 = scrollLevel;
  outC->_L346 = index;
  outC->_L536 = outC->_L346 + outC->_L535;
  outC->_L533 = scrollLevel;
  outC->_L339 = index;
  outC->_L534 = outC->_L339 + outC->_L533;
  outC->_L531 = scrollLevel;
  outC->_L303 = index;
  outC->_L532 = outC->_L303 + outC->_L531;
  outC->_L529 = scrollLevel;
  outC->_L332 = index;
  outC->_L530 = outC->_L332 + outC->_L529;
  outC->_L527 = scrollLevel;
  outC->_L103 = index;
  outC->_L528 = outC->_L103 + outC->_L527;
  outC->_L525 = scrollLevel;
  outC->_L313 = index;
  outC->_L526 = outC->_L313 + outC->_L525;
  outC->_L237 = index;
  outC->_L523 = scrollLevel;
  outC->_L524 = outC->_L523 + outC->_L237;
  outC->_L289 = index;
  outC->_L521 = scrollLevel;
  outC->_L522 = outC->_L521 + outC->_L289;
  kcg_copy_array_char_30(
    &outC->_L520,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L518 = scrollLevel;
  outC->_L517 = index;
  outC->_L519 = outC->_L517 + outC->_L518;
  kcg_copy_array_char_30_5(&outC->_L515, DefaultMsgQueue);
  if ((kcg_lit_int64(0) <= outC->_L519) & (outC->_L519 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L516, &outC->_L515[outC->_L519]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L516, &outC->_L520);
  }
  outC->_L514 = index;
  kcg_copy_array_char_30_5(&outC->_L91, acc);
  kcg_copy_array_char_30_5(&outC->_L513, &outC->_L91);
  if ((kcg_lit_int64(0) <= outC->_L514) & (outC->_L514 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L513[outC->_L514], &outC->_L516);
  }
  outC->_L511 = scrollLevel;
  outC->_L87 = index;
  outC->_L512 = outC->_L87 + outC->_L511;
  outC->_L507 = num9;
  kcg_copy_array_char_30_5(&outC->_L506, MsgQueue10);
  outC->_L505 = num2;
  outC->_L504 = index;
  kcg_copy_array_char_30(
    &outC->_L491,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L499 = num8;
  outC->_L492 = num7;
  outC->_L502 = num6;
  outC->_L493 = num5;
  outC->_L497 = num4;
  outC->_L496 = num3;
  outC->_L489 = num1;
  outC->_L498 = outC->_L489 + outC->_L505 + outC->_L496 + outC->_L497 +
    outC->_L493 + outC->_L502 + outC->_L492 + outC->_L499 + outC->_L507;
  outC->_L494 = outC->_L555 - outC->_L498;
  if ((kcg_lit_int64(0) <= outC->_L494) & (outC->_L494 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L503, &outC->_L506[outC->_L494]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L503, &outC->_L491);
  }
  kcg_copy_array_char_30_5(&outC->_L500, acc);
  kcg_copy_array_char_30_5(&outC->_L490, &outC->_L500);
  if ((kcg_lit_int64(0) <= outC->_L504) & (outC->_L504 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L490[outC->_L504], &outC->_L503);
  }
  kcg_copy_array_char_30_5(&outC->_L488, MsgQueue9);
  outC->_L487 = num8;
  outC->_L486 = num3;
  kcg_copy_array_char_30(
    &outC->_L483,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L479 = num7;
  outC->_L476 = num6;
  outC->_L477 = num5;
  outC->_L484 = num4;
  outC->_L481 = num2;
  outC->_L472 = num1;
  outC->_L478 = outC->_L472 + outC->_L481 + outC->_L486 + outC->_L484 +
    outC->_L477 + outC->_L476 + outC->_L479 + outC->_L487;
  outC->_L473 = outC->_L553 - outC->_L478;
  if ((kcg_lit_int64(0) <= outC->_L473) & (outC->_L473 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L485, &outC->_L488[outC->_L473]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L485, &outC->_L483);
  }
  outC->_L482 = index;
  kcg_copy_array_char_30_5(&outC->_L474, acc);
  kcg_copy_array_char_30_5(&outC->_L475, &outC->_L474);
  if ((kcg_lit_int64(0) <= outC->_L482) & (outC->_L482 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L475[outC->_L482], &outC->_L485);
  }
  outC->_L470 = num8;
  kcg_copy_array_char_30_5(&outC->_L469, MsgQueue9);
  outC->_L468 = num3;
  outC->_L467 = num2;
  outC->_L466 = num7;
  outC->_L465 = num5;
  outC->_L459 = num6;
  outC->_L462 = num4;
  outC->_L457 = num1;
  outC->_L455 = outC->_L457 + outC->_L467 + outC->_L468 + outC->_L462 +
    outC->_L465 + outC->_L459 + outC->_L466 + outC->_L470;
  outC->_L464 = outC->_L551 - outC->_L455;
  kcg_copy_array_char_30(
    &outC->_L461,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  if ((kcg_lit_int64(0) <= outC->_L464) & (outC->_L464 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L458, &outC->_L469[outC->_L464]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L458, &outC->_L461);
  }
  outC->_L460 = !kcg_comp_array_char_30(&outC->_L458, &outC->_L461);
  /* _L454= */
  if (outC->_L460) {
    kcg_copy_array_char_30_5(&outC->_L454, &outC->_L475);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L454, &outC->_L490);
  }
  outC->_L453 = num7;
  kcg_copy_array_char_30_5(&outC->_L452, MsgQueue8);
  outC->_L442 = num6;
  outC->_L448 = num5;
  outC->_L441 = num4;
  outC->_L447 = num3;
  outC->_L437 = num2;
  outC->_L446 = num1;
  outC->_L443 = outC->_L446 + outC->_L437 + outC->_L447 + outC->_L441 +
    outC->_L448 + outC->_L442 + outC->_L453;
  outC->_L451 = outC->_L549 - outC->_L443;
  outC->_L450 = index;
  kcg_copy_array_char_30(
    &outC->_L449,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  if ((kcg_lit_int64(0) <= outC->_L451) & (outC->_L451 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L445, &outC->_L452[outC->_L451]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L445, &outC->_L449);
  }
  kcg_copy_array_char_30_5(&outC->_L439, acc);
  kcg_copy_array_char_30_5(&outC->_L440, &outC->_L439);
  if ((kcg_lit_int64(0) <= outC->_L450) & (outC->_L450 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L440[outC->_L450], &outC->_L445);
  }
  outC->_L436 = num7;
  outC->_L435 = num6;
  kcg_copy_array_char_30_5(&outC->_L434, MsgQueue8);
  kcg_copy_array_char_30(
    &outC->_L427,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L432 = num5;
  outC->_L424 = num4;
  outC->_L431 = num3;
  outC->_L425 = num2;
  outC->_L422 = num1;
  outC->_L428 = outC->_L422 + outC->_L425 + outC->_L431 + outC->_L424 +
    outC->_L432 + outC->_L435 + outC->_L436;
  outC->_L421 = outC->_L547 - outC->_L428;
  if ((kcg_lit_int64(0) <= outC->_L421) & (outC->_L421 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L423, &outC->_L434[outC->_L421]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L423, &outC->_L427);
  }
  outC->_L430 = !kcg_comp_array_char_30(&outC->_L423, &outC->_L427);
  /* _L433= */
  if (outC->_L430) {
    kcg_copy_array_char_30_5(&outC->_L433, &outC->_L440);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L433, &outC->_L454);
  }
  outC->_L420 = num6;
  kcg_copy_array_char_30_5(&outC->_L419, MsgQueue7);
  kcg_copy_array_char_30(
    &outC->_L409,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L407 = num5;
  outC->_L411 = num4;
  outC->_L405 = num3;
  outC->_L408 = num2;
  outC->_L413 = num1;
  outC->_L416 = outC->_L413 + outC->_L408 + outC->_L405 + outC->_L411 +
    outC->_L407 + outC->_L420;
  outC->_L412 = outC->_L545 - outC->_L416;
  if ((kcg_lit_int64(0) <= outC->_L412) & (outC->_L412 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L418, &outC->_L419[outC->_L412]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L418, &outC->_L409);
  }
  outC->_L415 = index;
  kcg_copy_array_char_30_5(&outC->_L410, acc);
  kcg_copy_array_char_30_5(&outC->_L414, &outC->_L410);
  if ((kcg_lit_int64(0) <= outC->_L415) & (outC->_L415 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L414[outC->_L415], &outC->_L418);
  }
  outC->_L404 = num6;
  kcg_copy_array_char_30_5(&outC->_L403, MsgQueue7);
  outC->_L402 = num2;
  outC->_L400 = num4;
  kcg_copy_array_char_30(
    &outC->_L398,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L393 = num5;
  outC->_L395 = num3;
  outC->_L394 = num1;
  outC->_L397 = outC->_L394 + outC->_L402 + outC->_L395 + outC->_L400 +
    outC->_L393 + outC->_L404;
  outC->_L396 = outC->_L543 - outC->_L397;
  if ((kcg_lit_int64(0) <= outC->_L396) & (outC->_L396 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L399, &outC->_L403[outC->_L396]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L399, &outC->_L398);
  }
  outC->_L392 = !kcg_comp_array_char_30(&outC->_L399, &outC->_L398);
  /* _L390= */
  if (outC->_L392) {
    kcg_copy_array_char_30_5(&outC->_L390, &outC->_L414);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L390, &outC->_L433);
  }
  outC->_L389 = num5;
  kcg_copy_array_char_30_5(&outC->_L388, MsgQueue6);
  kcg_copy_array_char_30(
    &outC->_L375,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L378 = num4;
  outC->_L379 = num3;
  outC->_L385 = num2;
  outC->_L380 = num1;
  outC->_L384 = outC->_L380 + outC->_L385 + outC->_L379 + outC->_L378 +
    outC->_L389;
  outC->_L382 = outC->_L541 - outC->_L384;
  if ((kcg_lit_int64(0) <= outC->_L382) & (outC->_L382 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L386, &outC->_L388[outC->_L382]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L386, &outC->_L375);
  }
  outC->_L383 = index;
  kcg_copy_array_char_30_5(&outC->_L377, acc);
  kcg_copy_array_char_30_5(&outC->_L387, &outC->_L377);
  if ((kcg_lit_int64(0) <= outC->_L383) & (outC->_L383 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L387[outC->_L383], &outC->_L386);
  }
  kcg_copy_array_char_30_5(&outC->_L374, MsgQueue4);
  kcg_copy_array_char_30_5(&outC->_L373, MsgQueue5);
  outC->_L372 = num5;
  kcg_copy_array_char_30_5(&outC->_L371, MsgQueue6);
  kcg_copy_array_char_30(
    &outC->_L370,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L369 = num1;
  outC->_L368 = num4;
  outC->_L361 = num3;
  outC->_L363 = num2;
  outC->_L366 = outC->_L369 + outC->_L363 + outC->_L361 + outC->_L368 +
    outC->_L372;
  outC->_L360 = outC->_L539 - outC->_L366;
  if ((kcg_lit_int64(0) <= outC->_L360) & (outC->_L360 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L365, &outC->_L371[outC->_L360]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L365, &outC->_L370);
  }
  outC->_L364 = !kcg_comp_array_char_30(&outC->_L365, &outC->_L370);
  /* _L359= */
  if (outC->_L364) {
    kcg_copy_array_char_30_5(&outC->_L359, &outC->_L387);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L359, &outC->_L390);
  }
  outC->_L358 = num4;
  outC->_L357 = num1;
  outC->_L356 = index;
  kcg_copy_array_char_30(
    &outC->_L355,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L353 = num3;
  outC->_L348 = num2;
  outC->_L354 = outC->_L357 + outC->_L348 + outC->_L353 + outC->_L358;
  outC->_L350 = outC->_L536 - outC->_L354;
  if ((kcg_lit_int64(0) <= outC->_L350) & (outC->_L350 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L349, &outC->_L373[outC->_L350]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L349, &outC->_L355);
  }
  kcg_copy_array_char_30_5(&outC->_L351, acc);
  kcg_copy_array_char_30_5(&outC->_L352, &outC->_L351);
  if ((kcg_lit_int64(0) <= outC->_L356) & (outC->_L356 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L352[outC->_L356], &outC->_L349);
  }
  outC->_L345 = num4;
  kcg_copy_array_char_30_5(&outC->_L344, MsgQueue5);
  outC->_L343 = num2;
  kcg_copy_array_char_30(
    &outC->_L342,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L341 = num3;
  outC->_L340 = num1;
  outC->_L337 = outC->_L340 + outC->_L343 + outC->_L341 + outC->_L345;
  outC->_L334 = outC->_L534 - outC->_L337;
  if ((kcg_lit_int64(0) <= outC->_L334) & (outC->_L334 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L335, &outC->_L344[outC->_L334]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L335, &outC->_L342);
  }
  outC->_L336 = !kcg_comp_array_char_30(&outC->_L335, &outC->_L342);
  /* _L333= */
  if (outC->_L336) {
    kcg_copy_array_char_30_5(&outC->_L333, &outC->_L352);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L333, &outC->_L359);
  }
  outC->_L331 = num3;
  outC->_L330 = num2;
  outC->_L328 = num1;
  outC->_L329 = outC->_L328 + outC->_L330 + outC->_L331;
  outC->_L327 = outC->_L530 - outC->_L329;
  outC->_L310 = num2;
  outC->_L312 = num1;
  outC->_L311 = outC->_L312 + outC->_L310;
  outC->_L314 = outC->_L526 - outC->_L311;
  outC->_L309 = num3;
  outC->_L298 = num2;
  outC->_L299 = num1;
  outC->_L308 = outC->_L299 + outC->_L298 + outC->_L309;
  kcg_copy_array_char_30(
    &outC->_L305,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L300 = outC->_L532 - outC->_L308;
  if ((kcg_lit_int64(0) <= outC->_L300) & (outC->_L300 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L304, &outC->_L374[outC->_L300]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L304, &outC->_L305);
  }
  outC->_L302 = index;
  kcg_copy_array_char_30_5(&outC->_L301, acc);
  kcg_copy_array_char_30_5(&outC->_L307, &outC->_L301);
  if ((kcg_lit_int64(0) <= outC->_L302) & (outC->_L302 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L307[outC->_L302], &outC->_L304);
  }
  kcg_copy_array_char_30_5(&outC->_L297, MsgQueue4);
  kcg_copy_array_char_30(
    &outC->_L293,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  if ((kcg_lit_int64(0) <= outC->_L327) & (outC->_L327 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L295, &outC->_L297[outC->_L327]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L295, &outC->_L293);
  }
  outC->_L294 = !kcg_comp_array_char_30(&outC->_L295, &outC->_L293);
  /* _L296= */
  if (outC->_L294) {
    kcg_copy_array_char_30_5(&outC->_L296, &outC->_L307);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L296, &outC->_L333);
  }
  outC->_L291 = num1;
  outC->_L290 = outC->_L522 - outC->_L291;
  outC->_L288 = index;
  kcg_copy_array_char_30_5(&outC->_L287, acc);
  kcg_copy_array_char_30(
    &outC->_L162,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L271 = num2;
  outC->_L270 = num1;
  outC->_L272 = outC->_L270 + outC->_L271;
  outC->_L104 = outC->_L528 - outC->_L272;
  kcg_copy_array_char_30_5(&outC->_L269, MsgQueue3);
  if ((kcg_lit_int64(0) <= outC->_L104) & (outC->_L104 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L98, &outC->_L269[outC->_L104]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L98, &outC->_L162);
  }
  kcg_copy_array_char_30_5(&outC->_L286, &outC->_L287);
  if ((kcg_lit_int64(0) <= outC->_L288) & (outC->_L288 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L286[outC->_L288], &outC->_L98);
  }
  kcg_copy_array_char_30_5(&outC->_L285, MsgQueue3);
  kcg_copy_array_char_30(
    &outC->_L281,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  if ((kcg_lit_int64(0) <= outC->_L314) & (outC->_L314 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L283, &outC->_L285[outC->_L314]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L283, &outC->_L281);
  }
  outC->_L284 = !kcg_comp_array_char_30(&outC->_L283, &outC->_L281);
  /* _L279= */
  if (outC->_L284) {
    kcg_copy_array_char_30_5(&outC->_L279, &outC->_L286);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L279, &outC->_L296);
  }
  kcg_copy_array_char_30(
    &outC->_L277,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L274, MsgQueue2);
  if ((kcg_lit_int64(0) <= outC->_L290) & (outC->_L290 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L275, &outC->_L274[outC->_L290]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L275, &outC->_L277);
  }
  outC->_L278 = !kcg_comp_array_char_30(&outC->_L275, &outC->_L277);
  kcg_copy_array_char_30(
    &outC->_L180,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L238 = num1;
  outC->_L239 = outC->_L524 - outC->_L238;
  kcg_copy_array_char_30_5(&outC->_L229, MsgQueue2);
  if ((kcg_lit_int64(0) <= outC->_L239) & (outC->_L239 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L225, &outC->_L229[outC->_L239]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L225, &outC->_L180);
  }
  outC->_L182 = index;
  kcg_copy_array_char_30_5(&outC->_L177, acc);
  kcg_copy_array_char_30_5(&outC->_L185, &outC->_L177);
  if ((kcg_lit_int64(0) <= outC->_L182) & (outC->_L182 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L185[outC->_L182], &outC->_L225);
  }
  /* _L273= */
  if (outC->_L278) {
    kcg_copy_array_char_30_5(&outC->_L273, &outC->_L185);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L273, &outC->_L279);
  }
  kcg_copy_array_char_30(
    &outC->_L161,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L144, DefaultMsgQueue);
  if ((kcg_lit_int64(0) <= outC->_L512) & (outC->_L512 < kcg_lit_int64(5))) {
    kcg_copy_array_char_30(&outC->_L86, &outC->_L144[outC->_L512]);
  }
  else {
    kcg_copy_array_char_30(&outC->_L86, &outC->_L161);
  }
  outC->_L90 = !kcg_comp_array_char_30(&outC->_L86, &outC->_L161);
  /* _L84= */
  if (outC->_L90) {
    kcg_copy_array_char_30_5(&outC->_L84, &outC->_L513);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L84, &outC->_L273);
  }
  kcg_copy_array_char_30_5(&outC->plainTextQueue, &outC->_L84);
}

#ifndef KCG_USER_DEFINED_INIT
void MergeMessagesToPlain_iteration_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;
  static kcg_size idx95;
  static kcg_size idx96;
  static kcg_size idx97;
  static kcg_size idx98;
  static kcg_size idx99;
  static kcg_size idx100;
  static kcg_size idx101;
  static kcg_size idx102;
  static kcg_size idx103;
  static kcg_size idx104;
  static kcg_size idx105;
  static kcg_size idx106;
  static kcg_size idx107;
  static kcg_size idx108;
  static kcg_size idx109;
  static kcg_size idx110;
  static kcg_size idx111;
  static kcg_size idx112;
  static kcg_size idx113;
  static kcg_size idx114;
  static kcg_size idx115;
  static kcg_size idx116;
  static kcg_size idx117;
  static kcg_size idx118;
  static kcg_size idx119;
  static kcg_size idx120;
  static kcg_size idx121;
  static kcg_size idx122;
  static kcg_size idx123;
  static kcg_size idx124;
  static kcg_size idx125;
  static kcg_size idx126;
  static kcg_size idx127;
  static kcg_size idx128;
  static kcg_size idx129;
  static kcg_size idx130;
  static kcg_size idx131;
  static kcg_size idx132;
  static kcg_size idx133;
  static kcg_size idx134;
  static kcg_size idx135;

  outC->_L555 = kcg_lit_int64(0);
  outC->_L554 = kcg_lit_int64(0);
  outC->_L553 = kcg_lit_int64(0);
  outC->_L552 = kcg_lit_int64(0);
  outC->_L551 = kcg_lit_int64(0);
  outC->_L550 = kcg_lit_int64(0);
  outC->_L549 = kcg_lit_int64(0);
  outC->_L548 = kcg_lit_int64(0);
  outC->_L547 = kcg_lit_int64(0);
  outC->_L546 = kcg_lit_int64(0);
  outC->_L545 = kcg_lit_int64(0);
  outC->_L544 = kcg_lit_int64(0);
  outC->_L543 = kcg_lit_int64(0);
  outC->_L542 = kcg_lit_int64(0);
  outC->_L541 = kcg_lit_int64(0);
  outC->_L540 = kcg_lit_int64(0);
  outC->_L539 = kcg_lit_int64(0);
  outC->_L537 = kcg_lit_int64(0);
  outC->_L536 = kcg_lit_int64(0);
  outC->_L535 = kcg_lit_int64(0);
  outC->_L534 = kcg_lit_int64(0);
  outC->_L533 = kcg_lit_int64(0);
  outC->_L532 = kcg_lit_int64(0);
  outC->_L531 = kcg_lit_int64(0);
  outC->_L530 = kcg_lit_int64(0);
  outC->_L529 = kcg_lit_int64(0);
  outC->_L528 = kcg_lit_int64(0);
  outC->_L527 = kcg_lit_int64(0);
  outC->_L526 = kcg_lit_int64(0);
  outC->_L525 = kcg_lit_int64(0);
  outC->_L524 = kcg_lit_int64(0);
  outC->_L523 = kcg_lit_int64(0);
  outC->_L522 = kcg_lit_int64(0);
  outC->_L521 = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L520[idx] = ' ';
  }
  outC->_L519 = kcg_lit_int64(0);
  outC->_L518 = kcg_lit_int64(0);
  outC->_L517 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L516[idx1] = ' ';
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    for (idx2 = 0; idx2 < 30; idx2++) {
      outC->_L515[idx3][idx2] = ' ';
    }
  }
  outC->_L514 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    for (idx4 = 0; idx4 < 30; idx4++) {
      outC->_L513[idx5][idx4] = ' ';
    }
  }
  outC->_L512 = kcg_lit_int64(0);
  outC->_L511 = kcg_lit_int64(0);
  outC->_L507 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L506[idx7][idx6] = ' ';
    }
  }
  outC->_L489 = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    for (idx8 = 0; idx8 < 30; idx8++) {
      outC->_L490[idx9][idx8] = ' ';
    }
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L491[idx10] = ' ';
  }
  outC->_L492 = kcg_lit_int64(0);
  outC->_L493 = kcg_lit_int64(0);
  outC->_L494 = kcg_lit_int64(0);
  outC->_L495 = kcg_lit_int64(0);
  outC->_L496 = kcg_lit_int64(0);
  outC->_L497 = kcg_lit_int64(0);
  outC->_L498 = kcg_lit_int64(0);
  outC->_L499 = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    for (idx11 = 0; idx11 < 30; idx11++) {
      outC->_L500[idx12][idx11] = ' ';
    }
  }
  outC->_L502 = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L503[idx13] = ' ';
  }
  outC->_L504 = kcg_lit_int64(0);
  outC->_L505 = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    for (idx14 = 0; idx14 < 30; idx14++) {
      outC->_L488[idx15][idx14] = ' ';
    }
  }
  outC->_L487 = kcg_lit_int64(0);
  outC->_L472 = kcg_lit_int64(0);
  outC->_L473 = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 5; idx17++) {
    for (idx16 = 0; idx16 < 30; idx16++) {
      outC->_L474[idx17][idx16] = ' ';
    }
  }
  for (idx19 = 0; idx19 < 5; idx19++) {
    for (idx18 = 0; idx18 < 30; idx18++) {
      outC->_L475[idx19][idx18] = ' ';
    }
  }
  outC->_L476 = kcg_lit_int64(0);
  outC->_L477 = kcg_lit_int64(0);
  outC->_L478 = kcg_lit_int64(0);
  outC->_L479 = kcg_lit_int64(0);
  outC->_L480 = kcg_lit_int64(0);
  outC->_L481 = kcg_lit_int64(0);
  outC->_L482 = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L483[idx20] = ' ';
  }
  outC->_L484 = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L485[idx21] = ' ';
  }
  outC->_L486 = kcg_lit_int64(0);
  outC->_L470 = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 5; idx23++) {
    for (idx22 = 0; idx22 < 30; idx22++) {
      outC->_L469[idx23][idx22] = ' ';
    }
  }
  outC->_L455 = kcg_lit_int64(0);
  outC->_L456 = kcg_lit_int64(0);
  outC->_L457 = kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L458[idx24] = ' ';
  }
  outC->_L459 = kcg_lit_int64(0);
  outC->_L460 = kcg_true;
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L461[idx25] = ' ';
  }
  outC->_L462 = kcg_lit_int64(0);
  outC->_L464 = kcg_lit_int64(0);
  outC->_L465 = kcg_lit_int64(0);
  outC->_L466 = kcg_lit_int64(0);
  outC->_L467 = kcg_lit_int64(0);
  outC->_L468 = kcg_lit_int64(0);
  for (idx27 = 0; idx27 < 5; idx27++) {
    for (idx26 = 0; idx26 < 30; idx26++) {
      outC->_L454[idx27][idx26] = ' ';
    }
  }
  outC->_L453 = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 5; idx29++) {
    for (idx28 = 0; idx28 < 30; idx28++) {
      outC->_L452[idx29][idx28] = ' ';
    }
  }
  outC->_L437 = kcg_lit_int64(0);
  outC->_L438 = kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 5; idx31++) {
    for (idx30 = 0; idx30 < 30; idx30++) {
      outC->_L439[idx31][idx30] = ' ';
    }
  }
  for (idx33 = 0; idx33 < 5; idx33++) {
    for (idx32 = 0; idx32 < 30; idx32++) {
      outC->_L440[idx33][idx32] = ' ';
    }
  }
  outC->_L441 = kcg_lit_int64(0);
  outC->_L442 = kcg_lit_int64(0);
  outC->_L443 = kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L445[idx34] = ' ';
  }
  outC->_L446 = kcg_lit_int64(0);
  outC->_L447 = kcg_lit_int64(0);
  outC->_L448 = kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 30; idx35++) {
    outC->_L449[idx35] = ' ';
  }
  outC->_L450 = kcg_lit_int64(0);
  outC->_L451 = kcg_lit_int64(0);
  outC->_L436 = kcg_lit_int64(0);
  outC->_L435 = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 5; idx37++) {
    for (idx36 = 0; idx36 < 30; idx36++) {
      outC->_L434[idx37][idx36] = ' ';
    }
  }
  for (idx39 = 0; idx39 < 5; idx39++) {
    for (idx38 = 0; idx38 < 30; idx38++) {
      outC->_L433[idx39][idx38] = ' ';
    }
  }
  outC->_L421 = kcg_lit_int64(0);
  outC->_L422 = kcg_lit_int64(0);
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L423[idx40] = ' ';
  }
  outC->_L424 = kcg_lit_int64(0);
  outC->_L425 = kcg_lit_int64(0);
  for (idx41 = 0; idx41 < 30; idx41++) {
    outC->_L427[idx41] = ' ';
  }
  outC->_L428 = kcg_lit_int64(0);
  outC->_L429 = kcg_lit_int64(0);
  outC->_L430 = kcg_true;
  outC->_L431 = kcg_lit_int64(0);
  outC->_L432 = kcg_lit_int64(0);
  outC->_L420 = kcg_lit_int64(0);
  for (idx43 = 0; idx43 < 5; idx43++) {
    for (idx42 = 0; idx42 < 30; idx42++) {
      outC->_L419[idx43][idx42] = ' ';
    }
  }
  outC->_L405 = kcg_lit_int64(0);
  outC->_L407 = kcg_lit_int64(0);
  outC->_L408 = kcg_lit_int64(0);
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L409[idx44] = ' ';
  }
  for (idx46 = 0; idx46 < 5; idx46++) {
    for (idx45 = 0; idx45 < 30; idx45++) {
      outC->_L410[idx46][idx45] = ' ';
    }
  }
  outC->_L411 = kcg_lit_int64(0);
  outC->_L412 = kcg_lit_int64(0);
  outC->_L413 = kcg_lit_int64(0);
  for (idx48 = 0; idx48 < 5; idx48++) {
    for (idx47 = 0; idx47 < 30; idx47++) {
      outC->_L414[idx48][idx47] = ' ';
    }
  }
  outC->_L415 = kcg_lit_int64(0);
  outC->_L416 = kcg_lit_int64(0);
  outC->_L417 = kcg_lit_int64(0);
  for (idx49 = 0; idx49 < 30; idx49++) {
    outC->_L418[idx49] = ' ';
  }
  outC->_L404 = kcg_lit_int64(0);
  for (idx51 = 0; idx51 < 5; idx51++) {
    for (idx50 = 0; idx50 < 30; idx50++) {
      outC->_L403[idx51][idx50] = ' ';
    }
  }
  outC->_L391 = kcg_lit_int64(0);
  outC->_L392 = kcg_true;
  outC->_L393 = kcg_lit_int64(0);
  outC->_L394 = kcg_lit_int64(0);
  outC->_L395 = kcg_lit_int64(0);
  outC->_L396 = kcg_lit_int64(0);
  outC->_L397 = kcg_lit_int64(0);
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L398[idx52] = ' ';
  }
  for (idx53 = 0; idx53 < 30; idx53++) {
    outC->_L399[idx53] = ' ';
  }
  outC->_L400 = kcg_lit_int64(0);
  outC->_L402 = kcg_lit_int64(0);
  for (idx55 = 0; idx55 < 5; idx55++) {
    for (idx54 = 0; idx54 < 30; idx54++) {
      outC->_L390[idx55][idx54] = ' ';
    }
  }
  outC->_L389 = kcg_lit_int64(0);
  for (idx57 = 0; idx57 < 5; idx57++) {
    for (idx56 = 0; idx56 < 30; idx56++) {
      outC->_L388[idx57][idx56] = ' ';
    }
  }
  for (idx58 = 0; idx58 < 30; idx58++) {
    outC->_L375[idx58] = ' ';
  }
  for (idx60 = 0; idx60 < 5; idx60++) {
    for (idx59 = 0; idx59 < 30; idx59++) {
      outC->_L377[idx60][idx59] = ' ';
    }
  }
  outC->_L378 = kcg_lit_int64(0);
  outC->_L379 = kcg_lit_int64(0);
  outC->_L380 = kcg_lit_int64(0);
  outC->_L381 = kcg_lit_int64(0);
  outC->_L382 = kcg_lit_int64(0);
  outC->_L383 = kcg_lit_int64(0);
  outC->_L384 = kcg_lit_int64(0);
  outC->_L385 = kcg_lit_int64(0);
  for (idx61 = 0; idx61 < 30; idx61++) {
    outC->_L386[idx61] = ' ';
  }
  for (idx63 = 0; idx63 < 5; idx63++) {
    for (idx62 = 0; idx62 < 30; idx62++) {
      outC->_L387[idx63][idx62] = ' ';
    }
  }
  for (idx65 = 0; idx65 < 5; idx65++) {
    for (idx64 = 0; idx64 < 30; idx64++) {
      outC->_L374[idx65][idx64] = ' ';
    }
  }
  for (idx67 = 0; idx67 < 5; idx67++) {
    for (idx66 = 0; idx66 < 30; idx66++) {
      outC->_L373[idx67][idx66] = ' ';
    }
  }
  outC->_L372 = kcg_lit_int64(0);
  for (idx69 = 0; idx69 < 5; idx69++) {
    for (idx68 = 0; idx68 < 30; idx68++) {
      outC->_L371[idx69][idx68] = ' ';
    }
  }
  outC->_L360 = kcg_lit_int64(0);
  outC->_L361 = kcg_lit_int64(0);
  outC->_L363 = kcg_lit_int64(0);
  outC->_L364 = kcg_true;
  for (idx70 = 0; idx70 < 30; idx70++) {
    outC->_L365[idx70] = ' ';
  }
  outC->_L366 = kcg_lit_int64(0);
  outC->_L367 = kcg_lit_int64(0);
  outC->_L368 = kcg_lit_int64(0);
  outC->_L369 = kcg_lit_int64(0);
  for (idx71 = 0; idx71 < 30; idx71++) {
    outC->_L370[idx71] = ' ';
  }
  for (idx73 = 0; idx73 < 5; idx73++) {
    for (idx72 = 0; idx72 < 30; idx72++) {
      outC->_L359[idx73][idx72] = ' ';
    }
  }
  outC->_L358 = kcg_lit_int64(0);
  outC->_L346 = kcg_lit_int64(0);
  outC->_L348 = kcg_lit_int64(0);
  for (idx74 = 0; idx74 < 30; idx74++) {
    outC->_L349[idx74] = ' ';
  }
  outC->_L350 = kcg_lit_int64(0);
  for (idx76 = 0; idx76 < 5; idx76++) {
    for (idx75 = 0; idx75 < 30; idx75++) {
      outC->_L351[idx76][idx75] = ' ';
    }
  }
  for (idx78 = 0; idx78 < 5; idx78++) {
    for (idx77 = 0; idx77 < 30; idx77++) {
      outC->_L352[idx78][idx77] = ' ';
    }
  }
  outC->_L353 = kcg_lit_int64(0);
  outC->_L354 = kcg_lit_int64(0);
  for (idx79 = 0; idx79 < 30; idx79++) {
    outC->_L355[idx79] = ' ';
  }
  outC->_L356 = kcg_lit_int64(0);
  outC->_L357 = kcg_lit_int64(0);
  outC->_L345 = kcg_lit_int64(0);
  for (idx81 = 0; idx81 < 5; idx81++) {
    for (idx80 = 0; idx80 < 30; idx80++) {
      outC->_L344[idx81][idx80] = ' ';
    }
  }
  outC->_L343 = kcg_lit_int64(0);
  outC->_L334 = kcg_lit_int64(0);
  for (idx82 = 0; idx82 < 30; idx82++) {
    outC->_L335[idx82] = ' ';
  }
  outC->_L336 = kcg_true;
  outC->_L337 = kcg_lit_int64(0);
  outC->_L339 = kcg_lit_int64(0);
  outC->_L340 = kcg_lit_int64(0);
  outC->_L341 = kcg_lit_int64(0);
  for (idx83 = 0; idx83 < 30; idx83++) {
    outC->_L342[idx83] = ' ';
  }
  for (idx85 = 0; idx85 < 5; idx85++) {
    for (idx84 = 0; idx84 < 30; idx84++) {
      outC->_L333[idx85][idx84] = ' ';
    }
  }
  outC->_L327 = kcg_lit_int64(0);
  outC->_L328 = kcg_lit_int64(0);
  outC->_L329 = kcg_lit_int64(0);
  outC->_L330 = kcg_lit_int64(0);
  outC->_L331 = kcg_lit_int64(0);
  outC->_L332 = kcg_lit_int64(0);
  outC->_L310 = kcg_lit_int64(0);
  outC->_L311 = kcg_lit_int64(0);
  outC->_L312 = kcg_lit_int64(0);
  outC->_L313 = kcg_lit_int64(0);
  outC->_L314 = kcg_lit_int64(0);
  outC->_L309 = kcg_lit_int64(0);
  outC->_L298 = kcg_lit_int64(0);
  outC->_L299 = kcg_lit_int64(0);
  outC->_L300 = kcg_lit_int64(0);
  for (idx87 = 0; idx87 < 5; idx87++) {
    for (idx86 = 0; idx86 < 30; idx86++) {
      outC->_L301[idx87][idx86] = ' ';
    }
  }
  outC->_L302 = kcg_lit_int64(0);
  outC->_L303 = kcg_lit_int64(0);
  for (idx88 = 0; idx88 < 30; idx88++) {
    outC->_L304[idx88] = ' ';
  }
  for (idx89 = 0; idx89 < 30; idx89++) {
    outC->_L305[idx89] = ' ';
  }
  for (idx91 = 0; idx91 < 5; idx91++) {
    for (idx90 = 0; idx90 < 30; idx90++) {
      outC->_L307[idx91][idx90] = ' ';
    }
  }
  outC->_L308 = kcg_lit_int64(0);
  for (idx93 = 0; idx93 < 5; idx93++) {
    for (idx92 = 0; idx92 < 30; idx92++) {
      outC->_L297[idx93][idx92] = ' ';
    }
  }
  for (idx95 = 0; idx95 < 5; idx95++) {
    for (idx94 = 0; idx94 < 30; idx94++) {
      outC->_L296[idx95][idx94] = ' ';
    }
  }
  for (idx96 = 0; idx96 < 30; idx96++) {
    outC->_L293[idx96] = ' ';
  }
  outC->_L294 = kcg_true;
  for (idx97 = 0; idx97 < 30; idx97++) {
    outC->_L295[idx97] = ' ';
  }
  outC->_L289 = kcg_lit_int64(0);
  outC->_L290 = kcg_lit_int64(0);
  outC->_L291 = kcg_lit_int64(0);
  outC->_L288 = kcg_lit_int64(0);
  for (idx99 = 0; idx99 < 5; idx99++) {
    for (idx98 = 0; idx98 < 30; idx98++) {
      outC->_L287[idx99][idx98] = ' ';
    }
  }
  for (idx101 = 0; idx101 < 5; idx101++) {
    for (idx100 = 0; idx100 < 30; idx100++) {
      outC->_L286[idx101][idx100] = ' ';
    }
  }
  for (idx103 = 0; idx103 < 5; idx103++) {
    for (idx102 = 0; idx102 < 30; idx102++) {
      outC->_L285[idx103][idx102] = ' ';
    }
  }
  outC->_L284 = kcg_true;
  for (idx104 = 0; idx104 < 30; idx104++) {
    outC->_L281[idx104] = ' ';
  }
  for (idx105 = 0; idx105 < 30; idx105++) {
    outC->_L283[idx105] = ' ';
  }
  for (idx107 = 0; idx107 < 5; idx107++) {
    for (idx106 = 0; idx106 < 30; idx106++) {
      outC->_L279[idx107][idx106] = ' ';
    }
  }
  outC->_L278 = kcg_true;
  for (idx108 = 0; idx108 < 30; idx108++) {
    outC->_L277[idx108] = ' ';
  }
  for (idx109 = 0; idx109 < 30; idx109++) {
    outC->_L275[idx109] = ' ';
  }
  for (idx111 = 0; idx111 < 5; idx111++) {
    for (idx110 = 0; idx110 < 30; idx110++) {
      outC->_L274[idx111][idx110] = ' ';
    }
  }
  for (idx113 = 0; idx113 < 5; idx113++) {
    for (idx112 = 0; idx112 < 30; idx112++) {
      outC->_L273[idx113][idx112] = ' ';
    }
  }
  outC->_L272 = kcg_lit_int64(0);
  outC->_L271 = kcg_lit_int64(0);
  outC->_L270 = kcg_lit_int64(0);
  for (idx115 = 0; idx115 < 5; idx115++) {
    for (idx114 = 0; idx114 < 30; idx114++) {
      outC->_L269[idx115][idx114] = ' ';
    }
  }
  for (idx116 = 0; idx116 < 30; idx116++) {
    outC->_L225[idx116] = ' ';
  }
  for (idx117 = 0; idx117 < 30; idx117++) {
    outC->_L180[idx117] = ' ';
  }
  outC->_L237 = kcg_lit_int64(0);
  outC->_L238 = kcg_lit_int64(0);
  outC->_L239 = kcg_lit_int64(0);
  for (idx119 = 0; idx119 < 5; idx119++) {
    for (idx118 = 0; idx118 < 30; idx118++) {
      outC->_L177[idx119][idx118] = ' ';
    }
  }
  outC->_L182 = kcg_lit_int64(0);
  for (idx121 = 0; idx121 < 5; idx121++) {
    for (idx120 = 0; idx120 < 30; idx120++) {
      outC->_L185[idx121][idx120] = ' ';
    }
  }
  for (idx123 = 0; idx123 < 5; idx123++) {
    for (idx122 = 0; idx122 < 30; idx122++) {
      outC->_L229[idx123][idx122] = ' ';
    }
  }
  for (idx124 = 0; idx124 < 30; idx124++) {
    outC->_L162[idx124] = ' ';
  }
  for (idx125 = 0; idx125 < 30; idx125++) {
    outC->_L161[idx125] = ' ';
  }
  outC->_L87 = kcg_lit_int64(0);
  for (idx126 = 0; idx126 < 30; idx126++) {
    outC->_L86[idx126] = ' ';
  }
  for (idx128 = 0; idx128 < 5; idx128++) {
    for (idx127 = 0; idx127 < 30; idx127++) {
      outC->_L144[idx128][idx127] = ' ';
    }
  }
  outC->_L104 = kcg_lit_int64(0);
  outC->_L103 = kcg_lit_int64(0);
  for (idx129 = 0; idx129 < 30; idx129++) {
    outC->_L98[idx129] = ' ';
  }
  for (idx131 = 0; idx131 < 5; idx131++) {
    for (idx130 = 0; idx130 < 30; idx130++) {
      outC->_L91[idx131][idx130] = ' ';
    }
  }
  outC->_L90 = kcg_true;
  for (idx133 = 0; idx133 < 5; idx133++) {
    for (idx132 = 0; idx132 < 30; idx132++) {
      outC->_L84[idx133][idx132] = ' ';
    }
  }
  for (idx135 = 0; idx135 < 5; idx135++) {
    for (idx134 = 0; idx134 < 30; idx134++) {
      outC->plainTextQueue[idx135][idx134] = ' ';
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeMessagesToPlain_iteration_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

