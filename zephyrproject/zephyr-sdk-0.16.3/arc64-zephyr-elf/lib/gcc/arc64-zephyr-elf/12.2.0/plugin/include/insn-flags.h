/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_indirect_jumpsi (Pmode == SImode)
#define HAVE_indirect_jumpdi (Pmode == DImode)
#define HAVE_jump 1
#define HAVE_condjump 1
#define HAVE_simple_return 1
#define HAVE_trap_s 1
#define HAVE_trap 1
#define HAVE_nop 1
#define HAVE_blockage 1
#define HAVE_rtie 1
#define HAVE_dbnzsi (Pmode == SImode)
#define HAVE_dbnzdi (Pmode == DImode)
#define HAVE_casesi_dispatch 1
#define HAVE_casesi_addaddr 1
#define HAVE_casesi_addaddrdi 1
#define HAVE_casesi_dispatchdi 1
#define HAVE_addsi3_Vcmp (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_adddi3_Vcmp ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_subsi3_Vcmp (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_subdi3_Vcmp ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_negsi2_Vcmp 1
#define HAVE_negdi2_Vcmp 1
#define HAVE_mulsi3_Vcmp (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_umulsi3_Vcmp (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_fcmphf ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_fcmpsf ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fcmpdf ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_fcmpfhf ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_fcmpfsf ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fcmpfdf ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_negsi2 1
#define HAVE_rotl1 1
#define HAVE_rotl8 1
#define HAVE_bswapsi2 1
#define HAVE_bswapdi2 (TARGET_64BIT)
#define HAVE_clrsbhi2 (TARGET_BITSCAN)
#define HAVE_clrsbsi2 (TARGET_BITSCAN)
#define HAVE_clrsbdi2 ((TARGET_BITSCAN) && (TARGET_64BIT))
#define HAVE_ctzsi2 (TARGET_BITSCAN)
#define HAVE_ctzdi2 ((TARGET_BITSCAN) && (TARGET_64BIT))
#define HAVE_arc64_fls2 (TARGET_BITSCAN)
#define HAVE_arc64_flsl2 ((TARGET_BITSCAN) && (TARGET_64BIT))
#define HAVE_roundsf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_rounddf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_btruncsf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_btruncdf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_extendsfdf2 (ARC64_HAS_FPUD)
#define HAVE_extendhfsf2 (ARC64_HAS_FPUH)
#define HAVE_truncdfsf2 (ARC64_HAS_FPUD)
#define HAVE_truncsfhf2 (ARC64_HAS_FPUH)
#define HAVE_floatsisf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_floatdisf2 ((ARC64_HAS_FP_BASE) && ((ARC64_HAS_FPUS) && (TARGET_64BIT)))
#define HAVE_floatsidf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_floatdidf2 ((ARC64_HAS_FP_BASE) && ((ARC64_HAS_FPUD) && (TARGET_64BIT)))
#define HAVE_floatunssisf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_floatunsdisf2 ((ARC64_HAS_FP_BASE) && ((ARC64_HAS_FPUS) && (TARGET_64BIT)))
#define HAVE_floatunssidf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_floatunsdidf2 ((ARC64_HAS_FP_BASE) && ((ARC64_HAS_FPUD) && (TARGET_64BIT)))
#define HAVE_fixuns_truncsfsi2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fixuns_truncsfdi2 ((ARC64_HAS_FP_BASE) && ((TARGET_64BIT) && (ARC64_HAS_FPUS)))
#define HAVE_fixuns_truncdfsi2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_fixuns_truncdfdi2 ((ARC64_HAS_FP_BASE) && ((TARGET_64BIT) && (ARC64_HAS_FPUD)))
#define HAVE_fix_truncsfsi2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fix_truncsfdi2 ((ARC64_HAS_FP_BASE) && ((TARGET_64BIT) && (ARC64_HAS_FPUS)))
#define HAVE_fix_truncdfsi2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_fix_truncdfdi2 ((ARC64_HAS_FP_BASE) && ((TARGET_64BIT) && (ARC64_HAS_FPUD)))
#define HAVE_addhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_subhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_mulhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_divhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_sminhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_smaxhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_addsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_subsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_mulsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_divsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_sminsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_smaxsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_adddf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_subdf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_muldf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_divdf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_smindf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_smaxdf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_abshf2 (ARC64_HAS_FPUH)
#define HAVE_abssf2 (ARC64_HAS_FPUS)
#define HAVE_absdf2 (ARC64_HAS_FPUD)
#define HAVE_neghf2 (ARC64_HAS_FPUH)
#define HAVE_negsf2 (ARC64_HAS_FPUS)
#define HAVE_negdf2 (ARC64_HAS_FPUD)
#define HAVE_fmahf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_fmasf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fmadf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_fnmahf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_fnmasf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fnmadf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_fmshf4 ((!HONOR_SIGNED_ZEROS (HFmode) && ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_fmssf4 ((!HONOR_SIGNED_ZEROS (SFmode) && ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fmsdf4 ((!HONOR_SIGNED_ZEROS (DFmode) && ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_fnmshf4 ((!HONOR_SIGNED_ZEROS (HFmode) && ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_fnmssf4 ((!HONOR_SIGNED_ZEROS (SFmode) && ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_fnmsdf4 ((!HONOR_SIGNED_ZEROS (DFmode) && ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_sqrthf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_sqrtsf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_sqrtdf2 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_copysignhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_copysignsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_copysigndf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_xorsignhf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_xorsignsf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_xorsigndf3 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_lr 1
#define HAVE_sr 1
#define HAVE_lrl 1
#define HAVE_srl 1
#define HAVE_flag 1
#define HAVE_brk 1
#define HAVE_nopv 1
#define HAVE_sync 1
#define HAVE_addsi_cmp0 (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_andsi_cmp0 (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_iorsi_cmp0 (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_xorsi_cmp0 (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_adddi_cmp0 ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_anddi_cmp0 ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_iordi_cmp0 ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_xordi_cmp0 ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_subsi3_cmp (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_subdi3_cmp ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_addsi3_cmp (register_operand (operands[1], SImode) \
   || register_operand (operands[2], SImode))
#define HAVE_adddi3_cmp ((register_operand (operands[1], DImode) \
   || register_operand (operands[2], DImode)) && (TARGET_64BIT))
#define HAVE_addsi3_carry 1
#define HAVE_adddi3_carry (TARGET_64BIT)
#define HAVE_subsi3_carry 1
#define HAVE_subdi3_carry (TARGET_64BIT)
#define HAVE_mulhisi3i 1
#define HAVE_umulhisi3i 1
#define HAVE_smulsi3_highpart 1
#define HAVE_umulsi3_highpart 1
#define HAVE_smuldi3_highpart (TARGET_64BIT)
#define HAVE_umuldi3_highpart (TARGET_64BIT)
#define HAVE_usmuldi3_highpart 1
#define HAVE_machi0 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_umachi0 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_machi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_umachi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_macd0 (TARGET_SIMD)
#define HAVE_umacd0 (TARGET_SIMD)
#define HAVE_macd (TARGET_SIMD)
#define HAVE_umacd (TARGET_SIMD)
#define HAVE_macsi (TARGET_SIMD)
#define HAVE_macsi0 (TARGET_SIMD)
#define HAVE_dmpywhu (TARGET_SIMD && TARGET_64BIT)
#define HAVE_dmpywhu0 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_dmpywh (TARGET_SIMD && TARGET_64BIT)
#define HAVE_dmpywh0 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_dmach (TARGET_SIMD)
#define HAVE_dmach0 (TARGET_SIMD)
#define HAVE_dmacwh (TARGET_SIMD && TARGET_64BIT)
#define HAVE_pack2silo (TARGET_SIMD && TARGET_64BIT)
#define HAVE_dmacwh0 (TARGET_SIMD)
#define HAVE_dmacwhu (TARGET_SIMD && TARGET_64BIT)
#define HAVE_dmacwhu0 (TARGET_SIMD)
#define HAVE_arc64_vpack_v4hihi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_vpack_v2sisi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_addv2hi3 (TARGET_SIMD)
#define HAVE_subv2hi3 (TARGET_SIMD)
#define HAVE_addv4hi3 (TARGET_SIMD)
#define HAVE_subv4hi3 (TARGET_SIMD)
#define HAVE_addv2si3 (TARGET_SIMD)
#define HAVE_subv2si3 (TARGET_SIMD)
#define HAVE_negv2hi2 (TARGET_SIMD)
#define HAVE_negv4hi2 (TARGET_SIMD)
#define HAVE_negv2si2 (TARGET_SIMD)
#define HAVE_arc64_svmpy2h (TARGET_SIMD)
#define HAVE_arc64_uvmpy2h (TARGET_SIMD)
#define HAVE_arc64_swapl (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_svmach (TARGET_SIMD)
#define HAVE_arc64_uvmach (TARGET_SIMD)
#define HAVE_arc64_svmach_zero (TARGET_SIMD)
#define HAVE_arc64_uvmach_zero (TARGET_SIMD)
#define HAVE_reduc_plus_scal_v2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_packv2hi_lo (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_packv2hi_hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_svmpy2h_lo (TARGET_SIMD)
#define HAVE_arc64_uvmpy2h_lo (TARGET_SIMD)
#define HAVE_arc64_pack4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_bswapv2hi2 (TARGET_SIMD)
#define HAVE_bswapv4hi2 (TARGET_SIMD)
#define HAVE_bswapv2si2 (TARGET_SIMD)
#define HAVE_vec_extractv2hi (TARGET_SIMD)
#define HAVE_vec_extractv4hi (TARGET_SIMD)
#define HAVE_vec_extractv2si (TARGET_SIMD)
#define HAVE_arc64_vec_concat (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_duplicate_v2hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_duplicatev2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_shr_v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_shr_v2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_shl_v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_shl_v2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_dup_lane0v2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_dup_lane1v2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_sel_lane0_v2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_sel_lane1_v2si (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_sel_lane2_0v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_sel_lane3_1v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_swaplv2si (TARGET_64BIT)
#define HAVE_arc64_swapv4hi (TARGET_64BIT)
#define HAVE_arc64_swapv2hi 1
#define HAVE_arc64_swp_lane0_v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_swp_lane1_v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_arc64_truncate_lo_v2hi (TARGET_SIMD && !TARGET_64BIT)
#define HAVE_arc64_truncate_hi_v4hi (TARGET_SIMD && !TARGET_64BIT)
#define HAVE_vec_pack_trunc_si (TARGET_SIMD)
#define HAVE_vec_duplicatev2hi (TARGET_SIMD)
#define HAVE_arc64_sel_lane0_v2hi (TARGET_SIMD)
#define HAVE_arc64_sel_lane1_v2hi (TARGET_SIMD)
#define HAVE_arc64_vpack_v2hihi (TARGET_SIMD)
#define HAVE_sminv2si3 (TARGET_SIMD)
#define HAVE_smaxv2si3 (TARGET_SIMD)
#define HAVE_addv2hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_subv2hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_mulv2hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_divv2hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_addv4hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_subv4hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_mulv4hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_divv4hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_addv2sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_subv2sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_mulv2sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_divv2sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_addv8hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_subv8hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv8hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_divv8hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv4sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_subv4sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv4sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_divv4sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv2df3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_subv2df3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv2df3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_divv2df3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_duplicatev2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_vec_duplicatev4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vec_duplicatev2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vec_duplicatev8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_duplicatev4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_duplicatev2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv2hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_subv2hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_mulv2hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_divv2hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_addv4hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_subv4hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_mulv4hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_divv4hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_addv2sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_subv2sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_mulv2sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_divv2sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_addv8hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_subv8hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv8hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_divv8hf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv4sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_subv4sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv4sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_divv4sf3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv2df3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_subv2df3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv2df3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_divv2df3_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv2hf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_mulv2hf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_addv4hf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_mulv4hf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_addv2sf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_mulv2sf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_addv8hf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv8hf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv4sf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv4sf3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_addv2df3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_mulv2df3_rep2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_extractv2hfhf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_vec_extractv4hfhf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vec_extractv2sfsf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vec_extractv8hfhf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_extractv4sfsf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_extractv2dfdf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmav2hf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_fmav4hf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fmav2sf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fmav8hf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmav4sf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmav2df4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmav2hf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_fnmav4hf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fnmav2sf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fnmav8hf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmav4sf4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmav2df4 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmsv2hf4 ((!HONOR_SIGNED_ZEROS (V2HFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_fmsv4hf4 ((!HONOR_SIGNED_ZEROS (V4HFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fmsv2sf4 ((!HONOR_SIGNED_ZEROS (V2SFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fmsv8hf4 ((!HONOR_SIGNED_ZEROS (V8HFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmsv4sf4 ((!HONOR_SIGNED_ZEROS (V4SFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmsv2df4 ((!HONOR_SIGNED_ZEROS (V2DFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmsv2hf4 ((!HONOR_SIGNED_ZEROS (V2HFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_fnmsv4hf4 ((!HONOR_SIGNED_ZEROS (V4HFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fnmsv2sf4 ((!HONOR_SIGNED_ZEROS (V2SFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fnmsv8hf4 ((!HONOR_SIGNED_ZEROS (V8HFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmsv4sf4 ((!HONOR_SIGNED_ZEROS (V4SFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmsv2df4 ((!HONOR_SIGNED_ZEROS (V2DFmode) && ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_sqrtv2hf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_sqrtv4hf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_sqrtv2sf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_sqrtv8hf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_sqrtv4sf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_sqrtv2df2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmav2hf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_fmav4hf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fmav2sf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fmav8hf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmav4sf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fmav2df4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmav2hf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_fnmav4hf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fnmav2sf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_fnmav8hf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmav4sf4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_fnmav2df4_rep ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vfnmaddsv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_vfnmaddsv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vfnmaddsv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vfnmaddsv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vfnmaddsv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vfnmaddsv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vfnmsubsv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_vfnmsubsv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vfnmsubsv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vfnmsubsv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vfnmsubsv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vfnmsubsv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dexchv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dexchv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dexchv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sexchv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_sexchv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sexchv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sexchv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sexchv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_hexchv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_hexchv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_hexchv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_sminv2df3 (ARC64_VFP_128)
#define HAVE_smaxv2df3 (ARC64_VFP_128)
#define HAVE_absv2df2 (ARC64_VFP_128)
#define HAVE_negv2df2 (ARC64_VFP_128)
#define HAVE_arc64_dup_lane0v2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_dup_lane0v4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_dup_lane0v2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_dup_lane0v8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dup_lane0v4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dup_lane0v2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dup_lane1v2df (ARC64_VFP_128)
#define HAVE_arc64_dunpklv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dunpkmv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dpacklv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dpackmv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dbflylv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dbflymv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dunpklv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dunpkmv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dpacklv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dpackmv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dbflylv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dbflymv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dunpklv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dunpkmv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dpacklv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dpackmv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dbflylv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_dbflymv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sunpklv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_sunpkmv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_spacklv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_spackmv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_sbflylv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_sbflymv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_sunpklv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sunpkmv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_spacklv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_spackmv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sbflylv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sbflymv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sunpklv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sunpkmv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_spacklv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_spackmv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sbflylv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sbflymv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_sunpklv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sunpkmv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_spacklv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_spackmv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sbflylv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sbflymv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sunpklv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sunpkmv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_spacklv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_spackmv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sbflylv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_sbflymv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_hunpklv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_hunpkmv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_hpacklv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_hpackmv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_hbflylv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_hbflymv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_arc64_hunpklv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_hunpkmv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_hpacklv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_hpackmv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_hbflylv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_hbflymv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_arc64_hunpklv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_hunpkmv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_hpacklv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_hpackmv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_hbflylv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_arc64_hbflymv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_atomic_compare_and_swapsi_1 (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_compare_and_swapdi_1 ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_arc_load_exclusivesi (ARC64_HAS_ATOMIC_1)
#define HAVE_arc_load_exclusivedi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_arc_store_exclusivesi (ARC64_HAS_ATOMIC_1)
#define HAVE_arc_store_exclusivedi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_exchangesi 1
#define HAVE_exchangedi (TARGET_64BIT)
#define HAVE_atld_addsi (ARC64_HAS_ATOMIC_2)
#define HAVE_atld_iorsi (ARC64_HAS_ATOMIC_2)
#define HAVE_atld_xorsi (ARC64_HAS_ATOMIC_2)
#define HAVE_atld_andsi (ARC64_HAS_ATOMIC_2)
#define HAVE_atld_adddi ((ARC64_HAS_ATOMIC_2) && (TARGET_64BIT))
#define HAVE_atld_iordi ((ARC64_HAS_ATOMIC_2) && (TARGET_64BIT))
#define HAVE_atld_xordi ((ARC64_HAS_ATOMIC_2) && (TARGET_64BIT))
#define HAVE_atld_anddi ((ARC64_HAS_ATOMIC_2) && (TARGET_64BIT))
#define HAVE_arc32_svmach_hi (TARGET_SIMD && !TARGET_64BIT)
#define HAVE_arc32_uvmach_hi (TARGET_SIMD && !TARGET_64BIT)
#define HAVE_arc32_svmpy2h_hi (TARGET_SIMD && !TARGET_64BIT)
#define HAVE_arc32_uvmpy2h_hi (TARGET_SIMD && !TARGET_64BIT)
#define HAVE_ashlv2si3 (!TARGET_64BIT)
#define HAVE_lshrv2si3 (!TARGET_64BIT)
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movsi 1
#define HAVE_movdi (TARGET_64BIT || TARGET_LL64)
#define HAVE_movti (TARGET_WIDE_LDST)
#define HAVE_movsf 1
#define HAVE_movhf (ARC64_HAS_FPUH)
#define HAVE_movdf (ARC64_HAS_FPUD)
#define HAVE_cpymemsi ((!STRICT_ALIGNMENT) && (Pmode == SImode))
#define HAVE_cpymemdi ((!STRICT_ALIGNMENT) && (Pmode == DImode))
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_untyped_call 1
#define HAVE_indirect_jump 1
#define HAVE_cbranchsi4 1
#define HAVE_cbranchdi4 (TARGET_64BIT)
#define HAVE_cbranchhf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_cbranchsf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_cbranchdf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_cbranchcc4 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_return (arc64_can_use_return_insn_p ())
#define HAVE_doloop_begin 1
#define HAVE_doloop_end 1
#define HAVE_casesi 1
#define HAVE_extendsidi2 (TARGET_64BIT)
#define HAVE_zero_extendsidi2 (TARGET_64BIT)
#define HAVE_extendqisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_extendqidi2 (TARGET_64BIT)
#define HAVE_zero_extendqidi2 (TARGET_64BIT)
#define HAVE_extendhisi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_extendhidi2 (TARGET_64BIT)
#define HAVE_zero_extendhidi2 (TARGET_64BIT)
#define HAVE_addsi3 1
#define HAVE_subsi3 1
#define HAVE_mulsi3 1
#define HAVE_muldi3 (TARGET_64BIT)
#define HAVE_addvsi4 1
#define HAVE_addvdi4 (TARGET_64BIT)
#define HAVE_uaddvsi4 1
#define HAVE_uaddvdi4 (TARGET_64BIT)
#define HAVE_subvsi4 1
#define HAVE_subvdi4 (TARGET_64BIT)
#define HAVE_negvsi3 1
#define HAVE_negvdi3 (TARGET_64BIT)
#define HAVE_usubvsi4 1
#define HAVE_usubvdi4 (TARGET_64BIT)
#define HAVE_mulvsi4 1
#define HAVE_umulvsi4 1
#define HAVE_cmpsi 1
#define HAVE_cmpdi (TARGET_64BIT)
#define HAVE_cstoresi4 1
#define HAVE_cstoredi4 (TARGET_64BIT)
#define HAVE_cstorehf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUH))
#define HAVE_cstoresf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUS))
#define HAVE_cstoredf4 ((ARC64_HAS_FP_BASE) && (ARC64_HAS_FPUD))
#define HAVE_seteqsi 1
#define HAVE_setnesi 1
#define HAVE_setgtsi 1
#define HAVE_setltsi 1
#define HAVE_setgesi 1
#define HAVE_setlesi 1
#define HAVE_setltusi 1
#define HAVE_setgeusi 1
#define HAVE_setgtusi 1
#define HAVE_setleusi 1
#define HAVE_seteqdi (TARGET_64BIT)
#define HAVE_setnedi (TARGET_64BIT)
#define HAVE_setgtdi (TARGET_64BIT)
#define HAVE_setltdi (TARGET_64BIT)
#define HAVE_setgedi (TARGET_64BIT)
#define HAVE_setledi (TARGET_64BIT)
#define HAVE_setltudi (TARGET_64BIT)
#define HAVE_setgeudi (TARGET_64BIT)
#define HAVE_setgtudi (TARGET_64BIT)
#define HAVE_setleudi (TARGET_64BIT)
#define HAVE_movqicc 1
#define HAVE_movhicc 1
#define HAVE_movsicc 1
#define HAVE_movdicc (TARGET_64BIT)
#define HAVE_movhfcc (ARC64_HAS_FPUH)
#define HAVE_movsfcc (ARC64_HAS_FPUS)
#define HAVE_movdfcc (ARC64_HAS_FPUD)
#define HAVE_andsi3 1
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_sminsi3 1
#define HAVE_smaxsi3 1
#define HAVE_anddi3 (TARGET_64BIT)
#define HAVE_iordi3 (TARGET_64BIT)
#define HAVE_xordi3 (TARGET_64BIT)
#define HAVE_smindi3 (TARGET_64BIT)
#define HAVE_smaxdi3 (TARGET_64BIT)
#define HAVE_one_cmplsi2 1
#define HAVE_abssi2 1
#define HAVE_one_cmpldi2 (TARGET_64BIT)
#define HAVE_absdi2 (TARGET_64BIT)
#define HAVE_negsicc 1
#define HAVE_notsicc 1
#define HAVE_negdicc (TARGET_64BIT)
#define HAVE_notdicc (TARGET_64BIT)
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashldi3 (TARGET_64BIT)
#define HAVE_ashrdi3 (TARGET_64BIT)
#define HAVE_lshrdi3 (TARGET_64BIT)
#define HAVE_rotrsi3 1
#define HAVE_rotlsi3 1
#define HAVE_extzvsi 1
#define HAVE_extzvdi (TARGET_64BIT)
#define HAVE_clzsi2 (TARGET_BITSCAN)
#define HAVE_clzdi2 ((TARGET_BITSCAN) && (TARGET_64BIT))
#define HAVE_extendhfdf2 (ARC64_HAS_FPUS)
#define HAVE_truncdfhf2 (ARC64_HAS_FPUS)
#define HAVE_floatsihf2 (ARC64_HAS_FPUH)
#define HAVE_floatdihf2 (ARC64_HAS_FPUH)
#define HAVE_get_thread_pointersi (Pmode == SImode)
#define HAVE_get_thread_pointerdi (Pmode == DImode)
#define HAVE_set_thread_pointersi (Pmode == SImode)
#define HAVE_set_thread_pointerdi (Pmode == DImode)
#define HAVE_divsi3 (TARGET_ARC64_DIVREM)
#define HAVE_udivsi3 (TARGET_ARC64_DIVREM)
#define HAVE_modsi3 (TARGET_ARC64_DIVREM)
#define HAVE_umodsi3 (TARGET_ARC64_DIVREM)
#define HAVE_divdi3 ((TARGET_ARC64_DIVREM) && (TARGET_64BIT))
#define HAVE_udivdi3 ((TARGET_ARC64_DIVREM) && (TARGET_64BIT))
#define HAVE_moddi3 ((TARGET_ARC64_DIVREM) && (TARGET_64BIT))
#define HAVE_umoddi3 ((TARGET_ARC64_DIVREM) && (TARGET_64BIT))
#define HAVE_addsi3_Ccmp 1
#define HAVE_adddi3_Ccmp (TARGET_64BIT)
#define HAVE_subsi3_Ccmp 1
#define HAVE_subdi3_Ccmp (TARGET_64BIT)
#define HAVE_adddi3 1
#define HAVE_subdi3 1
#define HAVE_addti3 (TARGET_64BIT)
#define HAVE_subti3 (TARGET_64BIT)
#define HAVE_mulhisi3 1
#define HAVE_umulhisi3 1
#define HAVE_mulditi3 (TARGET_64BIT)
#define HAVE_umulditi3 (TARGET_64BIT)
#define HAVE_usmulditi3 (TARGET_64BIT)
#define HAVE_mulsidi3 (TARGET_SIMD)
#define HAVE_umulsidi3 (TARGET_SIMD)
#define HAVE_maddhisi4 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_umaddhisi4 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_maddsidi4 (TARGET_SIMD)
#define HAVE_umaddsidi4 (TARGET_SIMD)
#define HAVE_movv2hi (TARGET_SIMD)
#define HAVE_movv4hi (TARGET_SIMD)
#define HAVE_movv2si (TARGET_SIMD)
#define HAVE_movmisalignv2hi (TARGET_SIMD && !STRICT_ALIGNMENT)
#define HAVE_movmisalignv4hi (TARGET_SIMD && !STRICT_ALIGNMENT)
#define HAVE_movmisalignv2si (TARGET_SIMD && !STRICT_ALIGNMENT)
#define HAVE_vec_initv4hihi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_initv2sisi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_widen_smult_lo_v4hi (TARGET_SIMD)
#define HAVE_vec_widen_umult_lo_v4hi (TARGET_SIMD)
#define HAVE_vec_widen_smult_hi_v4hi (TARGET_SIMD)
#define HAVE_vec_widen_umult_hi_v4hi (TARGET_SIMD)
#define HAVE_sdot_prodv4hi (TARGET_SIMD)
#define HAVE_udot_prodv4hi (TARGET_SIMD)
#define HAVE_reduc_plus_scal_v4hi (TARGET_SIMD)
#define HAVE_fold_left_plus_v4hi (TARGET_SIMD)
#define HAVE_mulv2hi3 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_smulv2hi3_highpart (TARGET_SIMD && TARGET_64BIT)
#define HAVE_umulv2hi3_highpart (TARGET_SIMD && TARGET_64BIT)
#define HAVE_mulv4hi3 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_unpacku_lo_v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_unpacku_hi_v4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_vec_duplicatev4hi (TARGET_SIMD && TARGET_64BIT)
#define HAVE_cadd90v2si3 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_cadd90v2hi3 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_cadd270v2si3 (TARGET_SIMD && TARGET_64BIT)
#define HAVE_cadd270v2hi3 (TARGET_SIMD)
#define HAVE_vec_pack_trunc_v2si (TARGET_SIMD)
#define HAVE_movv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_movv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_movv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_movv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_movv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_movv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_movmisalignv2hf ((ARC64_HAS_FP_BASE && !STRICT_ALIGNMENT) && (ARC64_VFP_32))
#define HAVE_movmisalignv4hf ((ARC64_HAS_FP_BASE && !STRICT_ALIGNMENT) && (ARC64_VFP_64))
#define HAVE_movmisalignv2sf ((ARC64_HAS_FP_BASE && !STRICT_ALIGNMENT) && (ARC64_VFP_64))
#define HAVE_movmisalignv8hf ((ARC64_HAS_FP_BASE && !STRICT_ALIGNMENT) && (ARC64_VFP_128))
#define HAVE_movmisalignv4sf ((ARC64_HAS_FP_BASE && !STRICT_ALIGNMENT) && (ARC64_VFP_128))
#define HAVE_movmisalignv2df ((ARC64_HAS_FP_BASE && !STRICT_ALIGNMENT) && (ARC64_VFP_128))
#define HAVE_negv2hf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_negv4hf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_negv2sf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_negv8hf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_negv4sf2 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_setv2hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_vec_setv4hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vec_setv2sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_vec_setv8hf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_setv4sf ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_vec_setv2df ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_reduc_plus_scal_v8hf 1
#define HAVE_reduc_plus_scal_v2hf (ARC64_VFP_32)
#define HAVE_reduc_plus_scal_v2sf (ARC64_VFP_64)
#define HAVE_reduc_plus_scal_v2df (ARC64_VFP_128)
#define HAVE_reduc_plus_scal_v4hf (ARC64_VFP_64)
#define HAVE_reduc_plus_scal_v4sf (ARC64_VFP_128)
#define HAVE_vec_pack_trunc_v2df (ARC64_VFP_128)
#define HAVE_vec_pack_trunc_df (ARC64_VFP_64)
#define HAVE_cadd90v2hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_cadd90v4hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_cadd90v2sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_cadd90v8hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_cadd90v4sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_cadd90v2df3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_cadd270v2hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_32))
#define HAVE_cadd270v4hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_cadd270v2sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_64))
#define HAVE_cadd270v8hf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_cadd270v4sf3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_cadd270v2df3 ((ARC64_HAS_FP_BASE) && (ARC64_VFP_128))
#define HAVE_memory_barrier 1
#define HAVE_atomic_compare_and_swapqi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_compare_and_swaphi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_compare_and_swapsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_compare_and_swapdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_exchangesi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_addsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_subsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_iorsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_xorsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_andsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_adddi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_subdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_iordi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_xordi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_anddi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_nandsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_fetch_addsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_fetch_iorsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_fetch_xorsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_fetch_andsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_fetch_adddi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_fetch_iordi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_fetch_xordi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_fetch_anddi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_fetch_subsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_fetch_subdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_fetch_nandsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_fetch_nanddi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_add_fetchsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_sub_fetchsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_ior_fetchsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_xor_fetchsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_and_fetchsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_add_fetchdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_sub_fetchdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_ior_fetchdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_xor_fetchdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_and_fetchdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
#define HAVE_atomic_nand_fetchsi (ARC64_HAS_ATOMIC_1)
#define HAVE_atomic_nand_fetchdi ((ARC64_HAS_ATOMIC_1) && (TARGET_64BIT))
extern rtx        gen_indirect_jumpsi             (rtx);
extern rtx        gen_indirect_jumpdi             (rtx);
extern rtx        gen_jump                        (rtx);
extern rtx        gen_condjump                    (rtx, rtx, rtx);
extern rtx        gen_simple_return               (void);
extern rtx        gen_trap_s                      (rtx);
extern rtx        gen_trap                        (void);
extern rtx        gen_nop                         (void);
extern rtx        gen_blockage                    (void);
extern rtx        gen_rtie                        (void);
extern rtx        gen_dbnzsi                      (rtx, rtx);
extern rtx        gen_dbnzdi                      (rtx, rtx);
extern rtx        gen_casesi_dispatch             (rtx, rtx);
extern rtx        gen_casesi_addaddr              (rtx, rtx, rtx);
extern rtx        gen_casesi_addaddrdi            (rtx, rtx, rtx);
extern rtx        gen_casesi_dispatchdi           (rtx, rtx);
extern rtx        gen_addsi3_Vcmp                 (rtx, rtx, rtx);
extern rtx        gen_adddi3_Vcmp                 (rtx, rtx, rtx);
extern rtx        gen_subsi3_Vcmp                 (rtx, rtx, rtx);
extern rtx        gen_subdi3_Vcmp                 (rtx, rtx, rtx);
extern rtx        gen_negsi2_Vcmp                 (rtx, rtx);
extern rtx        gen_negdi2_Vcmp                 (rtx, rtx);
extern rtx        gen_mulsi3_Vcmp                 (rtx, rtx, rtx);
extern rtx        gen_umulsi3_Vcmp                (rtx, rtx, rtx);
extern rtx        gen_fcmphf                      (rtx, rtx);
extern rtx        gen_fcmpsf                      (rtx, rtx);
extern rtx        gen_fcmpdf                      (rtx, rtx);
extern rtx        gen_fcmpfhf                     (rtx, rtx);
extern rtx        gen_fcmpfsf                     (rtx, rtx);
extern rtx        gen_fcmpfdf                     (rtx, rtx);
extern rtx        gen_negsi2                      (rtx, rtx);
extern rtx        gen_rotl1                       (rtx, rtx);
extern rtx        gen_rotl8                       (rtx, rtx);
extern rtx        gen_bswapsi2                    (rtx, rtx);
extern rtx        gen_bswapdi2                    (rtx, rtx);
extern rtx        gen_clrsbhi2                    (rtx, rtx);
extern rtx        gen_clrsbsi2                    (rtx, rtx);
extern rtx        gen_clrsbdi2                    (rtx, rtx);
extern rtx        gen_ctzsi2                      (rtx, rtx);
extern rtx        gen_ctzdi2                      (rtx, rtx);
extern rtx        gen_arc64_fls2                  (rtx, rtx);
extern rtx        gen_arc64_flsl2                 (rtx, rtx);
extern rtx        gen_roundsf2                    (rtx, rtx);
extern rtx        gen_rounddf2                    (rtx, rtx);
extern rtx        gen_btruncsf2                   (rtx, rtx);
extern rtx        gen_btruncdf2                   (rtx, rtx);
extern rtx        gen_extendsfdf2                 (rtx, rtx);
extern rtx        gen_extendhfsf2                 (rtx, rtx);
extern rtx        gen_truncdfsf2                  (rtx, rtx);
extern rtx        gen_truncsfhf2                  (rtx, rtx);
extern rtx        gen_floatsisf2                  (rtx, rtx);
extern rtx        gen_floatdisf2                  (rtx, rtx);
extern rtx        gen_floatsidf2                  (rtx, rtx);
extern rtx        gen_floatdidf2                  (rtx, rtx);
extern rtx        gen_floatunssisf2               (rtx, rtx);
extern rtx        gen_floatunsdisf2               (rtx, rtx);
extern rtx        gen_floatunssidf2               (rtx, rtx);
extern rtx        gen_floatunsdidf2               (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2           (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2           (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2           (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2           (rtx, rtx);
extern rtx        gen_fix_truncsfsi2              (rtx, rtx);
extern rtx        gen_fix_truncsfdi2              (rtx, rtx);
extern rtx        gen_fix_truncdfsi2              (rtx, rtx);
extern rtx        gen_fix_truncdfdi2              (rtx, rtx);
extern rtx        gen_addhf3                      (rtx, rtx, rtx);
extern rtx        gen_subhf3                      (rtx, rtx, rtx);
extern rtx        gen_mulhf3                      (rtx, rtx, rtx);
extern rtx        gen_divhf3                      (rtx, rtx, rtx);
extern rtx        gen_sminhf3                     (rtx, rtx, rtx);
extern rtx        gen_smaxhf3                     (rtx, rtx, rtx);
extern rtx        gen_addsf3                      (rtx, rtx, rtx);
extern rtx        gen_subsf3                      (rtx, rtx, rtx);
extern rtx        gen_mulsf3                      (rtx, rtx, rtx);
extern rtx        gen_divsf3                      (rtx, rtx, rtx);
extern rtx        gen_sminsf3                     (rtx, rtx, rtx);
extern rtx        gen_smaxsf3                     (rtx, rtx, rtx);
extern rtx        gen_adddf3                      (rtx, rtx, rtx);
extern rtx        gen_subdf3                      (rtx, rtx, rtx);
extern rtx        gen_muldf3                      (rtx, rtx, rtx);
extern rtx        gen_divdf3                      (rtx, rtx, rtx);
extern rtx        gen_smindf3                     (rtx, rtx, rtx);
extern rtx        gen_smaxdf3                     (rtx, rtx, rtx);
extern rtx        gen_abshf2                      (rtx, rtx);
extern rtx        gen_abssf2                      (rtx, rtx);
extern rtx        gen_absdf2                      (rtx, rtx);
extern rtx        gen_neghf2                      (rtx, rtx);
extern rtx        gen_negsf2                      (rtx, rtx);
extern rtx        gen_negdf2                      (rtx, rtx);
extern rtx        gen_fmahf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fmasf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fmadf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmahf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmasf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmadf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_fmshf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fmssf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsdf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmshf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmssf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsdf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_sqrthf2                     (rtx, rtx);
extern rtx        gen_sqrtsf2                     (rtx, rtx);
extern rtx        gen_sqrtdf2                     (rtx, rtx);
extern rtx        gen_copysignhf3                 (rtx, rtx, rtx);
extern rtx        gen_copysignsf3                 (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                 (rtx, rtx, rtx);
extern rtx        gen_xorsignhf3                  (rtx, rtx, rtx);
extern rtx        gen_xorsignsf3                  (rtx, rtx, rtx);
extern rtx        gen_xorsigndf3                  (rtx, rtx, rtx);
extern rtx        gen_lr                          (rtx, rtx);
extern rtx        gen_sr                          (rtx, rtx);
extern rtx        gen_lrl                         (rtx, rtx);
extern rtx        gen_srl                         (rtx, rtx);
extern rtx        gen_flag                        (rtx);
extern rtx        gen_brk                         (void);
extern rtx        gen_nopv                        (void);
extern rtx        gen_sync                        (void);
extern rtx        gen_addsi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_andsi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_iorsi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_xorsi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_adddi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_anddi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_iordi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_xordi_cmp0                  (rtx, rtx, rtx);
extern rtx        gen_subsi3_cmp                  (rtx, rtx, rtx);
extern rtx        gen_subdi3_cmp                  (rtx, rtx, rtx);
extern rtx        gen_addsi3_cmp                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_adddi3_cmp                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3_carry                (rtx, rtx, rtx);
extern rtx        gen_adddi3_carry                (rtx, rtx, rtx);
extern rtx        gen_subsi3_carry                (rtx, rtx, rtx);
extern rtx        gen_subdi3_carry                (rtx, rtx, rtx);
extern rtx        gen_mulhisi3i                   (rtx, rtx, rtx);
extern rtx        gen_umulhisi3i                  (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart            (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart            (rtx, rtx, rtx);
extern rtx        gen_smuldi3_highpart            (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart            (rtx, rtx, rtx);
extern rtx        gen_usmuldi3_highpart           (rtx, rtx, rtx);
extern rtx        gen_machi0                      (rtx, rtx);
extern rtx        gen_umachi0                     (rtx, rtx);
extern rtx        gen_machi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_umachi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_macd0                       (rtx, rtx);
extern rtx        gen_umacd0                      (rtx, rtx);
extern rtx        gen_macd                        (rtx, rtx, rtx, rtx);
extern rtx        gen_umacd                       (rtx, rtx, rtx, rtx);
extern rtx        gen_macsi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_macsi0                      (rtx, rtx);
extern rtx        gen_dmpywhu                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_dmpywhu0                    (rtx, rtx, rtx);
extern rtx        gen_dmpywh                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_dmpywh0                     (rtx, rtx, rtx);
extern rtx        gen_dmach                       (rtx, rtx, rtx, rtx);
extern rtx        gen_dmach0                      (rtx, rtx);
extern rtx        gen_dmacwh                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_pack2silo                   (rtx, rtx, rtx);
extern rtx        gen_dmacwh0                     (rtx, rtx, rtx);
extern rtx        gen_dmacwhu                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_dmacwhu0                    (rtx, rtx, rtx);
extern rtx        gen_arc64_vpack_v4hihi          (rtx, rtx, rtx);
extern rtx        gen_arc64_vpack_v2sisi          (rtx, rtx, rtx);
extern rtx        gen_addv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_subv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_addv4hi3                    (rtx, rtx, rtx);
extern rtx        gen_subv4hi3                    (rtx, rtx, rtx);
extern rtx        gen_addv2si3                    (rtx, rtx, rtx);
extern rtx        gen_subv2si3                    (rtx, rtx, rtx);
extern rtx        gen_negv2hi2                    (rtx, rtx);
extern rtx        gen_negv4hi2                    (rtx, rtx);
extern rtx        gen_negv2si2                    (rtx, rtx);
extern rtx        gen_arc64_svmpy2h               (rtx, rtx, rtx);
extern rtx        gen_arc64_uvmpy2h               (rtx, rtx, rtx);
extern rtx        gen_arc64_swapl                 (rtx, rtx);
extern rtx        gen_arc64_svmach                (rtx, rtx, rtx);
extern rtx        gen_arc64_uvmach                (rtx, rtx, rtx);
extern rtx        gen_arc64_svmach_zero           (rtx, rtx);
extern rtx        gen_arc64_uvmach_zero           (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2si        (rtx, rtx);
extern rtx        gen_arc64_packv2hi_lo           (rtx, rtx);
extern rtx        gen_arc64_packv2hi_hi           (rtx, rtx);
extern rtx        gen_arc64_svmpy2h_lo            (rtx, rtx, rtx);
extern rtx        gen_arc64_uvmpy2h_lo            (rtx, rtx, rtx);
extern rtx        gen_arc64_pack4hi               (rtx, rtx, rtx);
extern rtx        gen_bswapv2hi2                  (rtx, rtx);
extern rtx        gen_bswapv4hi2                  (rtx, rtx);
extern rtx        gen_bswapv2si2                  (rtx, rtx);
extern rtx        gen_vec_extractv2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2si             (rtx, rtx, rtx);
extern rtx        gen_arc64_vec_concat            (rtx, rtx, rtx);
extern rtx        gen_arc64_duplicate_v2hi        (rtx, rtx);
extern rtx        gen_vec_duplicatev2si           (rtx, rtx);
extern rtx        gen_vec_shr_v4hi                (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v2si                (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v4hi                (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v2si                (rtx, rtx, rtx);
extern rtx        gen_arc64_dup_lane0v2si         (rtx, rtx);
extern rtx        gen_arc64_dup_lane1v2si         (rtx, rtx);
extern rtx        gen_arc64_sel_lane0_v2si        (rtx, rtx, rtx);
extern rtx        gen_arc64_sel_lane1_v2si        (rtx, rtx, rtx);
extern rtx        gen_arc64_sel_lane2_0v4hi       (rtx, rtx, rtx);
extern rtx        gen_arc64_sel_lane3_1v4hi       (rtx, rtx, rtx);
extern rtx        gen_arc64_swaplv2si             (rtx, rtx);
extern rtx        gen_arc64_swapv4hi              (rtx, rtx);
extern rtx        gen_arc64_swapv2hi              (rtx, rtx);
extern rtx        gen_arc64_swp_lane0_v4hi        (rtx, rtx, rtx);
extern rtx        gen_arc64_swp_lane1_v4hi        (rtx, rtx, rtx);
extern rtx        gen_arc64_truncate_lo_v2hi      (rtx, rtx);
extern rtx        gen_arc64_truncate_hi_v4hi      (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_si           (rtx, rtx, rtx);
extern rtx        gen_vec_duplicatev2hi           (rtx, rtx);
extern rtx        gen_arc64_sel_lane0_v2hi        (rtx, rtx, rtx);
extern rtx        gen_arc64_sel_lane1_v2hi        (rtx, rtx, rtx);
extern rtx        gen_arc64_vpack_v2hihi          (rtx, rtx, rtx);
extern rtx        gen_sminv2si3                   (rtx, rtx, rtx);
extern rtx        gen_smaxv2si3                   (rtx, rtx, rtx);
extern rtx        gen_addv2hf3                    (rtx, rtx, rtx);
extern rtx        gen_subv2hf3                    (rtx, rtx, rtx);
extern rtx        gen_mulv2hf3                    (rtx, rtx, rtx);
extern rtx        gen_divv2hf3                    (rtx, rtx, rtx);
extern rtx        gen_addv4hf3                    (rtx, rtx, rtx);
extern rtx        gen_subv4hf3                    (rtx, rtx, rtx);
extern rtx        gen_mulv4hf3                    (rtx, rtx, rtx);
extern rtx        gen_divv4hf3                    (rtx, rtx, rtx);
extern rtx        gen_addv2sf3                    (rtx, rtx, rtx);
extern rtx        gen_subv2sf3                    (rtx, rtx, rtx);
extern rtx        gen_mulv2sf3                    (rtx, rtx, rtx);
extern rtx        gen_divv2sf3                    (rtx, rtx, rtx);
extern rtx        gen_addv8hf3                    (rtx, rtx, rtx);
extern rtx        gen_subv8hf3                    (rtx, rtx, rtx);
extern rtx        gen_mulv8hf3                    (rtx, rtx, rtx);
extern rtx        gen_divv8hf3                    (rtx, rtx, rtx);
extern rtx        gen_addv4sf3                    (rtx, rtx, rtx);
extern rtx        gen_subv4sf3                    (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3                    (rtx, rtx, rtx);
extern rtx        gen_divv4sf3                    (rtx, rtx, rtx);
extern rtx        gen_addv2df3                    (rtx, rtx, rtx);
extern rtx        gen_subv2df3                    (rtx, rtx, rtx);
extern rtx        gen_mulv2df3                    (rtx, rtx, rtx);
extern rtx        gen_divv2df3                    (rtx, rtx, rtx);
extern rtx        gen_vec_duplicatev2hf           (rtx, rtx);
extern rtx        gen_vec_duplicatev4hf           (rtx, rtx);
extern rtx        gen_vec_duplicatev2sf           (rtx, rtx);
extern rtx        gen_vec_duplicatev8hf           (rtx, rtx);
extern rtx        gen_vec_duplicatev4sf           (rtx, rtx);
extern rtx        gen_vec_duplicatev2df           (rtx, rtx);
extern rtx        gen_addv2hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_subv2hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_mulv2hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_divv2hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_addv4hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_subv4hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_mulv4hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_divv4hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_addv2sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_subv2sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_mulv2sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_divv2sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_addv8hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_subv8hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_mulv8hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_divv8hf3_rep                (rtx, rtx, rtx);
extern rtx        gen_addv4sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_subv4sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_divv4sf3_rep                (rtx, rtx, rtx);
extern rtx        gen_addv2df3_rep                (rtx, rtx, rtx);
extern rtx        gen_subv2df3_rep                (rtx, rtx, rtx);
extern rtx        gen_mulv2df3_rep                (rtx, rtx, rtx);
extern rtx        gen_divv2df3_rep                (rtx, rtx, rtx);
extern rtx        gen_addv2hf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_mulv2hf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_addv4hf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_mulv4hf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_addv2sf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_mulv2sf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_addv8hf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_mulv8hf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_addv4sf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3_rep2               (rtx, rtx, rtx);
extern rtx        gen_addv2df3_rep2               (rtx, rtx, rtx);
extern rtx        gen_mulv2df3_rep2               (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2hfhf           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4hfhf           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2sfsf           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8hfhf           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sfsf           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2dfdf           (rtx, rtx, rtx);
extern rtx        gen_fmav2hf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4hf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2sf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav8hf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4sf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2df4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav2hf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav4hf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav2sf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav8hf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav4sf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav2df4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv2hf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv4hf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv2sf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv8hf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv4sf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv2df4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsv2hf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsv4hf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsv2sf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsv8hf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsv4sf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsv2df4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_sqrtv2hf2                   (rtx, rtx);
extern rtx        gen_sqrtv4hf2                   (rtx, rtx);
extern rtx        gen_sqrtv2sf2                   (rtx, rtx);
extern rtx        gen_sqrtv8hf2                   (rtx, rtx);
extern rtx        gen_sqrtv4sf2                   (rtx, rtx);
extern rtx        gen_sqrtv2df2                   (rtx, rtx);
extern rtx        gen_fmav2hf4_rep                (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4hf4_rep                (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2sf4_rep                (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav8hf4_rep                (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4sf4_rep                (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2df4_rep                (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav2hf4_rep               (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav4hf4_rep               (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav2sf4_rep               (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav8hf4_rep               (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav4sf4_rep               (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmav2df4_rep               (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmaddsv2hf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmaddsv4hf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmaddsv2sf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmaddsv8hf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmaddsv4sf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmaddsv2df                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmsubsv2hf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmsubsv4hf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmsubsv2sf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmsubsv8hf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmsubsv4sf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vfnmsubsv2df                (rtx, rtx, rtx, rtx);
extern rtx        gen_arc64_dexchv8hf             (rtx, rtx);
extern rtx        gen_arc64_dexchv4sf             (rtx, rtx);
extern rtx        gen_arc64_dexchv2df             (rtx, rtx);
extern rtx        gen_arc64_sexchv2hf             (rtx, rtx);
extern rtx        gen_arc64_sexchv4hf             (rtx, rtx);
extern rtx        gen_arc64_sexchv2sf             (rtx, rtx);
extern rtx        gen_arc64_sexchv8hf             (rtx, rtx);
extern rtx        gen_arc64_sexchv4sf             (rtx, rtx);
extern rtx        gen_arc64_hexchv2hf             (rtx, rtx);
extern rtx        gen_arc64_hexchv4hf             (rtx, rtx);
extern rtx        gen_arc64_hexchv8hf             (rtx, rtx);
extern rtx        gen_sminv2df3                   (rtx, rtx, rtx);
extern rtx        gen_smaxv2df3                   (rtx, rtx, rtx);
extern rtx        gen_absv2df2                    (rtx, rtx);
extern rtx        gen_negv2df2                    (rtx, rtx);
extern rtx        gen_arc64_dup_lane0v2hf         (rtx, rtx);
extern rtx        gen_arc64_dup_lane0v4hf         (rtx, rtx);
extern rtx        gen_arc64_dup_lane0v2sf         (rtx, rtx);
extern rtx        gen_arc64_dup_lane0v8hf         (rtx, rtx);
extern rtx        gen_arc64_dup_lane0v4sf         (rtx, rtx);
extern rtx        gen_arc64_dup_lane0v2df         (rtx, rtx);
extern rtx        gen_arc64_dup_lane1v2df         (rtx, rtx);
extern rtx        gen_arc64_dunpklv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dunpkmv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dpacklv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dpackmv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dbflylv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dbflymv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dunpklv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dunpkmv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dpacklv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dpackmv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dbflylv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dbflymv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_dunpklv2df            (rtx, rtx, rtx);
extern rtx        gen_arc64_dunpkmv2df            (rtx, rtx, rtx);
extern rtx        gen_arc64_dpacklv2df            (rtx, rtx, rtx);
extern rtx        gen_arc64_dpackmv2df            (rtx, rtx, rtx);
extern rtx        gen_arc64_dbflylv2df            (rtx, rtx, rtx);
extern rtx        gen_arc64_dbflymv2df            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpklv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpkmv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spacklv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spackmv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflylv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflymv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpklv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpkmv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spacklv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spackmv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflylv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflymv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpklv2sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpkmv2sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spacklv2sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spackmv2sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflylv2sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflymv2sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpklv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpkmv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spacklv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spackmv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflylv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflymv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpklv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sunpkmv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spacklv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_spackmv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflylv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_sbflymv4sf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hunpklv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hunpkmv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hpacklv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hpackmv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hbflylv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hbflymv2hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hunpklv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hunpkmv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hpacklv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hpackmv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hbflylv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hbflymv4hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hunpklv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hunpkmv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hpacklv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hpackmv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hbflylv8hf            (rtx, rtx, rtx);
extern rtx        gen_arc64_hbflymv8hf            (rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi_1 (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi_1 (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arc_load_exclusivesi        (rtx, rtx);
extern rtx        gen_arc_load_exclusivedi        (rtx, rtx);
extern rtx        gen_arc_store_exclusivesi       (rtx, rtx);
extern rtx        gen_arc_store_exclusivedi       (rtx, rtx);
extern rtx        gen_exchangesi                  (rtx, rtx, rtx);
extern rtx        gen_exchangedi                  (rtx, rtx, rtx);
extern rtx        gen_atld_addsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atld_iorsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atld_xorsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atld_andsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atld_adddi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atld_iordi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atld_xordi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atld_anddi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arc32_svmach_hi             (rtx, rtx, rtx);
extern rtx        gen_arc32_uvmach_hi             (rtx, rtx, rtx);
extern rtx        gen_arc32_svmpy2h_hi            (rtx, rtx, rtx);
extern rtx        gen_arc32_uvmpy2h_hi            (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3                   (rtx, rtx, rtx);
extern rtx        gen_lshrv2si3                   (rtx, rtx, rtx);
extern rtx        gen_movqi                       (rtx, rtx);
extern rtx        gen_movhi                       (rtx, rtx);
extern rtx        gen_movsi                       (rtx, rtx);
extern rtx        gen_movdi                       (rtx, rtx);
extern rtx        gen_movti                       (rtx, rtx);
extern rtx        gen_movsf                       (rtx, rtx);
extern rtx        gen_movhf                       (rtx, rtx);
extern rtx        gen_movdf                       (rtx, rtx);
extern rtx        gen_cpymemsi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cpymemdi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_call                        (rtx, rtx, rtx);
extern rtx        gen_call_value                  (rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall                     (rtx, rtx, rtx);
extern rtx        gen_sibcall_value               (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                (rtx, rtx, rtx);
extern rtx        gen_indirect_jump               (rtx);
extern rtx        gen_cbranchsi4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchhf4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchcc4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_prologue                    (void);
extern rtx        gen_epilogue                    (void);
extern rtx        gen_sibcall_epilogue            (void);
extern rtx        gen_return                      (void);
extern rtx        gen_doloop_begin                (rtx, rtx);
extern rtx        gen_doloop_end                  (rtx, rtx);
extern rtx        gen_casesi                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_extendsidi2                 (rtx, rtx);
extern rtx        gen_zero_extendsidi2            (rtx, rtx);
extern rtx        gen_extendqisi2                 (rtx, rtx);
extern rtx        gen_zero_extendqisi2            (rtx, rtx);
extern rtx        gen_extendqidi2                 (rtx, rtx);
extern rtx        gen_zero_extendqidi2            (rtx, rtx);
extern rtx        gen_extendhisi2                 (rtx, rtx);
extern rtx        gen_zero_extendhisi2            (rtx, rtx);
extern rtx        gen_extendhidi2                 (rtx, rtx);
extern rtx        gen_zero_extendhidi2            (rtx, rtx);
extern rtx        gen_addsi3                      (rtx, rtx, rtx);
extern rtx        gen_subsi3                      (rtx, rtx, rtx);
extern rtx        gen_mulsi3                      (rtx, rtx, rtx);
extern rtx        gen_muldi3                      (rtx, rtx, rtx);
extern rtx        gen_addvsi4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_addvdi4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_uaddvsi4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_uaddvdi4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_subvsi4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_subvdi4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_negvsi3                     (rtx, rtx, rtx);
extern rtx        gen_negvdi3                     (rtx, rtx, rtx);
extern rtx        gen_usubvsi4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_usubvdi4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mulvsi4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_umulvsi4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpsi                       (rtx, rtx);
extern rtx        gen_cmpdi                       (rtx, rtx);
extern rtx        gen_cstoresi4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorehf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_seteqsi                     (rtx, rtx, rtx);
extern rtx        gen_setnesi                     (rtx, rtx, rtx);
extern rtx        gen_setgtsi                     (rtx, rtx, rtx);
extern rtx        gen_setltsi                     (rtx, rtx, rtx);
extern rtx        gen_setgesi                     (rtx, rtx, rtx);
extern rtx        gen_setlesi                     (rtx, rtx, rtx);
extern rtx        gen_setltusi                    (rtx, rtx, rtx);
extern rtx        gen_setgeusi                    (rtx, rtx, rtx);
extern rtx        gen_setgtusi                    (rtx, rtx, rtx);
extern rtx        gen_setleusi                    (rtx, rtx, rtx);
extern rtx        gen_seteqdi                     (rtx, rtx, rtx);
extern rtx        gen_setnedi                     (rtx, rtx, rtx);
extern rtx        gen_setgtdi                     (rtx, rtx, rtx);
extern rtx        gen_setltdi                     (rtx, rtx, rtx);
extern rtx        gen_setgedi                     (rtx, rtx, rtx);
extern rtx        gen_setledi                     (rtx, rtx, rtx);
extern rtx        gen_setltudi                    (rtx, rtx, rtx);
extern rtx        gen_setgeudi                    (rtx, rtx, rtx);
extern rtx        gen_setgtudi                    (rtx, rtx, rtx);
extern rtx        gen_setleudi                    (rtx, rtx, rtx);
extern rtx        gen_movqicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movhicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movhfcc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_andsi3                      (rtx, rtx, rtx);
extern rtx        gen_iorsi3                      (rtx, rtx, rtx);
extern rtx        gen_xorsi3                      (rtx, rtx, rtx);
extern rtx        gen_sminsi3                     (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                     (rtx, rtx, rtx);
extern rtx        gen_anddi3                      (rtx, rtx, rtx);
extern rtx        gen_iordi3                      (rtx, rtx, rtx);
extern rtx        gen_xordi3                      (rtx, rtx, rtx);
extern rtx        gen_smindi3                     (rtx, rtx, rtx);
extern rtx        gen_smaxdi3                     (rtx, rtx, rtx);
extern rtx        gen_one_cmplsi2                 (rtx, rtx);
extern rtx        gen_abssi2                      (rtx, rtx);
extern rtx        gen_one_cmpldi2                 (rtx, rtx);
extern rtx        gen_absdi2                      (rtx, rtx);
extern rtx        gen_negsicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_notsicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_negdicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_notdicc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3                     (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                     (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                     (rtx, rtx, rtx);
extern rtx        gen_ashldi3                     (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                     (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                     (rtx, rtx, rtx);
extern rtx        gen_rotrsi3                     (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                     (rtx, rtx, rtx);
extern rtx        gen_extzvsi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_extzvdi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_clzsi2                      (rtx, rtx);
extern rtx        gen_clzdi2                      (rtx, rtx);
extern rtx        gen_extendhfdf2                 (rtx, rtx);
extern rtx        gen_truncdfhf2                  (rtx, rtx);
extern rtx        gen_floatsihf2                  (rtx, rtx);
extern rtx        gen_floatdihf2                  (rtx, rtx);
extern rtx        gen_get_thread_pointersi        (rtx);
extern rtx        gen_get_thread_pointerdi        (rtx);
extern rtx        gen_set_thread_pointersi        (rtx);
extern rtx        gen_set_thread_pointerdi        (rtx);
extern rtx        gen_divsi3                      (rtx, rtx, rtx);
extern rtx        gen_udivsi3                     (rtx, rtx, rtx);
extern rtx        gen_modsi3                      (rtx, rtx, rtx);
extern rtx        gen_umodsi3                     (rtx, rtx, rtx);
extern rtx        gen_divdi3                      (rtx, rtx, rtx);
extern rtx        gen_udivdi3                     (rtx, rtx, rtx);
extern rtx        gen_moddi3                      (rtx, rtx, rtx);
extern rtx        gen_umoddi3                     (rtx, rtx, rtx);
extern rtx        gen_addsi3_Ccmp                 (rtx, rtx, rtx);
extern rtx        gen_adddi3_Ccmp                 (rtx, rtx, rtx);
extern rtx        gen_subsi3_Ccmp                 (rtx, rtx, rtx);
extern rtx        gen_subdi3_Ccmp                 (rtx, rtx, rtx);
extern rtx        gen_adddi3                      (rtx, rtx, rtx);
extern rtx        gen_subdi3                      (rtx, rtx, rtx);
extern rtx        gen_addti3                      (rtx, rtx, rtx);
extern rtx        gen_subti3                      (rtx, rtx, rtx);
extern rtx        gen_mulhisi3                    (rtx, rtx, rtx);
extern rtx        gen_umulhisi3                   (rtx, rtx, rtx);
extern rtx        gen_mulditi3                    (rtx, rtx, rtx);
extern rtx        gen_umulditi3                   (rtx, rtx, rtx);
extern rtx        gen_usmulditi3                  (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                    (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                   (rtx, rtx, rtx);
extern rtx        gen_maddhisi4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_umaddhisi4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_maddsidi4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_umaddsidi4                  (rtx, rtx, rtx, rtx);
extern rtx        gen_movv2hi                     (rtx, rtx);
extern rtx        gen_movv4hi                     (rtx, rtx);
extern rtx        gen_movv2si                     (rtx, rtx);
extern rtx        gen_movmisalignv2hi             (rtx, rtx);
extern rtx        gen_movmisalignv4hi             (rtx, rtx);
extern rtx        gen_movmisalignv2si             (rtx, rtx);
extern rtx        gen_vec_initv4hihi              (rtx, rtx);
extern rtx        gen_vec_initv2sisi              (rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v4hi     (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v4hi     (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v4hi     (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v4hi     (rtx, rtx, rtx);
extern rtx        gen_sdot_prodv4hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_udot_prodv4hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_reduc_plus_scal_v4hi        (rtx, rtx);
extern rtx        gen_fold_left_plus_v4hi         (rtx, rtx, rtx);
extern rtx        gen_mulv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_smulv2hi3_highpart          (rtx, rtx, rtx);
extern rtx        gen_umulv2hi3_highpart          (rtx, rtx, rtx);
extern rtx        gen_mulv4hi3                    (rtx, rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v4hi         (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v4hi         (rtx, rtx);
extern rtx        gen_vec_duplicatev4hi           (rtx, rtx);
extern rtx        gen_cadd90v2si3                 (rtx, rtx, rtx);
extern rtx        gen_cadd90v2hi3                 (rtx, rtx, rtx);
extern rtx        gen_cadd270v2si3                (rtx, rtx, rtx);
extern rtx        gen_cadd270v2hi3                (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2si         (rtx, rtx, rtx);
extern rtx        gen_movv2hf                     (rtx, rtx);
extern rtx        gen_movv4hf                     (rtx, rtx);
extern rtx        gen_movv2sf                     (rtx, rtx);
extern rtx        gen_movv8hf                     (rtx, rtx);
extern rtx        gen_movv4sf                     (rtx, rtx);
extern rtx        gen_movv2df                     (rtx, rtx);
extern rtx        gen_movmisalignv2hf             (rtx, rtx);
extern rtx        gen_movmisalignv4hf             (rtx, rtx);
extern rtx        gen_movmisalignv2sf             (rtx, rtx);
extern rtx        gen_movmisalignv8hf             (rtx, rtx);
extern rtx        gen_movmisalignv4sf             (rtx, rtx);
extern rtx        gen_movmisalignv2df             (rtx, rtx);
extern rtx        gen_negv2hf2                    (rtx, rtx);
extern rtx        gen_negv4hf2                    (rtx, rtx);
extern rtx        gen_negv2sf2                    (rtx, rtx);
extern rtx        gen_negv8hf2                    (rtx, rtx);
extern rtx        gen_negv4sf2                    (rtx, rtx);
extern rtx        gen_vec_setv2hf                 (rtx, rtx, rtx);
extern rtx        gen_vec_setv4hf                 (rtx, rtx, rtx);
extern rtx        gen_vec_setv2sf                 (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hf                 (rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf                 (rtx, rtx, rtx);
extern rtx        gen_vec_setv2df                 (rtx, rtx, rtx);
extern rtx        gen_reduc_plus_scal_v8hf        (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2hf        (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2sf        (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2df        (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v4hf        (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v4sf        (rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2df         (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_df           (rtx, rtx, rtx);
extern rtx        gen_cadd90v2hf3                 (rtx, rtx, rtx);
extern rtx        gen_cadd90v4hf3                 (rtx, rtx, rtx);
extern rtx        gen_cadd90v2sf3                 (rtx, rtx, rtx);
extern rtx        gen_cadd90v8hf3                 (rtx, rtx, rtx);
extern rtx        gen_cadd90v4sf3                 (rtx, rtx, rtx);
extern rtx        gen_cadd90v2df3                 (rtx, rtx, rtx);
extern rtx        gen_cadd270v2hf3                (rtx, rtx, rtx);
extern rtx        gen_cadd270v4hf3                (rtx, rtx, rtx);
extern rtx        gen_cadd270v2sf3                (rtx, rtx, rtx);
extern rtx        gen_cadd270v8hf3                (rtx, rtx, rtx);
extern rtx        gen_cadd270v4sf3                (rtx, rtx, rtx);
extern rtx        gen_cadd270v2df3                (rtx, rtx, rtx);
extern rtx        gen_memory_barrier              (void);
extern rtx        gen_atomic_compare_and_swapqi   (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swaphi   (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi   (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi   (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangesi           (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_addsi                (rtx, rtx, rtx);
extern rtx        gen_atomic_subsi                (rtx, rtx, rtx);
extern rtx        gen_atomic_iorsi                (rtx, rtx, rtx);
extern rtx        gen_atomic_xorsi                (rtx, rtx, rtx);
extern rtx        gen_atomic_andsi                (rtx, rtx, rtx);
extern rtx        gen_atomic_adddi                (rtx, rtx, rtx);
extern rtx        gen_atomic_subdi                (rtx, rtx, rtx);
extern rtx        gen_atomic_iordi                (rtx, rtx, rtx);
extern rtx        gen_atomic_xordi                (rtx, rtx, rtx);
extern rtx        gen_atomic_anddi                (rtx, rtx, rtx);
extern rtx        gen_atomic_nandsi               (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iorsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iordi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_anddi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subdi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandsi         (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nanddi         (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_ior_fetchsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchsi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchdi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchdi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_ior_fetchdi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchdi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchdi          (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchsi         (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchdi         (rtx, rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
