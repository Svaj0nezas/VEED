/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/__w/_temp/workspace/build/.build/arc-zephyr-elf/src/gcc/gcc/config/arc/arc.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern bool general_operand (rtx, machine_mode);
extern bool address_operand (rtx, machine_mode);
extern bool register_operand (rtx, machine_mode);
extern bool pmode_register_operand (rtx, machine_mode);
extern bool scratch_operand (rtx, machine_mode);
extern bool immediate_operand (rtx, machine_mode);
extern bool const_int_operand (rtx, machine_mode);
extern bool const_double_operand (rtx, machine_mode);
extern bool nonimmediate_operand (rtx, machine_mode);
extern bool nonmemory_operand (rtx, machine_mode);
extern bool push_operand (rtx, machine_mode);
extern bool pop_operand (rtx, machine_mode);
extern bool memory_operand (rtx, machine_mode);
extern bool indirect_operand (rtx, machine_mode);
extern bool ordered_comparison_operator (rtx, machine_mode);
extern bool comparison_operator (rtx, machine_mode);
extern bool dest_reg_operand (rtx, machine_mode);
extern bool mpy_dest_reg_operand (rtx, machine_mode);
extern bool symbolic_operand (rtx, machine_mode);
extern bool call_address_operand (rtx, machine_mode);
extern bool call_operand (rtx, machine_mode);
extern bool u6_immediate_operand (rtx, machine_mode);
extern bool short_immediate_operand (rtx, machine_mode);
extern bool p2_immediate_operand (rtx, machine_mode);
extern bool long_immediate_operand (rtx, machine_mode);
extern bool long_immediate_loadstore_operand (rtx, machine_mode);
extern bool compact_register_operand (rtx, machine_mode);
extern bool compact_hreg_operand (rtx, machine_mode);
extern bool compact_store_memory_operand (rtx, machine_mode);
extern bool move_src_operand (rtx, machine_mode);
extern bool move_double_src_operand (rtx, machine_mode);
extern bool move_dest_operand (rtx, machine_mode);
extern bool nonvol_nonimm_operand (rtx, machine_mode);
extern bool proper_comparison_operator (rtx, machine_mode);
extern bool equality_comparison_operator (rtx, machine_mode);
extern bool ge_lt_comparison_operator (rtx, machine_mode);
extern bool brcc_nolimm_operator (rtx, machine_mode);
extern bool cc_register (rtx, machine_mode);
extern bool cc_set_register (rtx, machine_mode);
extern bool cc_use_register (rtx, machine_mode);
extern bool zn_compare_operator (rtx, machine_mode);
extern bool shift_operator (rtx, machine_mode);
extern bool shiftl4_operator (rtx, machine_mode);
extern bool shiftr4_operator (rtx, machine_mode);
extern bool shift4_operator (rtx, machine_mode);
extern bool mult_operator (rtx, machine_mode);
extern bool commutative_operator (rtx, machine_mode);
extern bool commutative_operator_sans_mult (rtx, machine_mode);
extern bool noncommutative_operator (rtx, machine_mode);
extern bool unary_operator (rtx, machine_mode);
extern bool _1_2_3_operand (rtx, machine_mode);
extern bool _2_4_8_operand (rtx, machine_mode);
extern bool arc_double_register_operand (rtx, machine_mode);
extern bool shouldbe_register_operand (rtx, machine_mode);
extern bool vector_register_operand (rtx, machine_mode);
extern bool vector_register_or_memory_operand (rtx, machine_mode);
extern bool arc_dpfp_operator (rtx, machine_mode);
extern bool arc_simd_dma_register_operand (rtx, machine_mode);
extern bool acc1_operand (rtx, machine_mode);
extern bool acc2_operand (rtx, machine_mode);
extern bool mlo_operand (rtx, machine_mode);
extern bool mhi_operand (rtx, machine_mode);
extern bool accl_operand (rtx, machine_mode);
extern bool extend_operand (rtx, machine_mode);
extern bool millicode_store_operation (rtx, machine_mode);
extern bool millicode_load_operation (rtx, machine_mode);
extern bool millicode_load_clob_operation (rtx, machine_mode);
extern bool immediate_usidi_operand (rtx, machine_mode);
extern bool short_const_int_operand (rtx, machine_mode);
extern bool mem_noofs_operand (rtx, machine_mode);
extern bool any_mem_operand (rtx, machine_mode);
extern bool even_register_operand (rtx, machine_mode);
extern bool double_register_operand (rtx, machine_mode);
extern bool cmem_address_0 (rtx, machine_mode);
extern bool cmem_address_1 (rtx, machine_mode);
extern bool cmem_address_2 (rtx, machine_mode);
extern bool cmem_address (rtx, machine_mode);
extern bool short_unsigned_const_operand (rtx, machine_mode);
extern bool arc_short_operand (rtx, machine_mode);
extern bool push_multi_operand (rtx, machine_mode);
extern bool pop_multi_operand (rtx, machine_mode);
extern bool arc_nonmemory_operand (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_c,
  CONSTRAINT_Rac,
  CONSTRAINT_w,
  CONSTRAINT_W,
  CONSTRAINT_x,
  CONSTRAINT_q,
  CONSTRAINT_Rrq,
  CONSTRAINT_D,
  CONSTRAINT_d,
  CONSTRAINT_v,
  CONSTRAINT_Rsc,
  CONSTRAINT_h,
  CONSTRAINT_Rcd,
  CONSTRAINT_Rsd,
  CONSTRAINT_Rzd,
  CONSTRAINT_I,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_N,
  CONSTRAINT_O,
  CONSTRAINT_P,
  CONSTRAINT_J12,
  CONSTRAINT_J16,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_T,
  CONSTRAINT_Uts,
  CONSTRAINT_S,
  CONSTRAINT_Uex,
  CONSTRAINT_Usd,
  CONSTRAINT_Usc,
  CONSTRAINT_ATO,
  CONSTRAINT_Ucd,
  CONSTRAINT_p,
  CONSTRAINT_CnL,
  CONSTRAINT_CmL,
  CONSTRAINT_C16,
  CONSTRAINT_C__0,
  CONSTRAINT_Cn0,
  CONSTRAINT_Cca,
  CONSTRAINT_CL2,
  CONSTRAINT_CM4,
  CONSTRAINT_Csp,
  CONSTRAINT_C2a,
  CONSTRAINT_C0p,
  CONSTRAINT_C1p,
  CONSTRAINT_C2p,
  CONSTRAINT_C3p,
  CONSTRAINT_Ccp,
  CONSTRAINT_Cux,
  CONSTRAINT_Chs,
  CONSTRAINT_Clo,
  CONSTRAINT_Chi,
  CONSTRAINT_Cbf,
  CONSTRAINT_Cbn,
  CONSTRAINT_C18,
  CONSTRAINT_Cbi,
  CONSTRAINT_C0x,
  CONSTRAINT_Cax,
  CONSTRAINT_G,
  CONSTRAINT_H,
  CONSTRAINT_CfZ,
  CONSTRAINT_Cbr,
  CONSTRAINT_Cbp,
  CONSTRAINT_Cji,
  CONSTRAINT_Csc,
  CONSTRAINT_Clb,
  CONSTRAINT_Q,
  CONSTRAINT_Cm1,
  CONSTRAINT_Cm2,
  CONSTRAINT_Cm3,
  CONSTRAINT_C62,
  CONSTRAINT_l,
  CONSTRAINT_Rcq,
  CONSTRAINT_Rcw,
  CONSTRAINT_Rcr,
  CONSTRAINT_Rcb,
  CONSTRAINT_Rck,
  CONSTRAINT_Rcc,
  CONSTRAINT_Ral,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_Us_l,
  CONSTRAINT_Us_g,
  CONSTRAINT_Ucm,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_Cpc,
  CONSTRAINT_Cal,
  CONSTRAINT_C32,
  CONSTRAINT_Csz,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_I;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_Rzd;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_Ucd;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_CnL && c <= CONSTRAINT_C62)
    return;
  if (c >= CONSTRAINT_l && c <= CONSTRAINT_Ral)
    {
      *allows_reg = true;
      return;
    }
  if (c >= CONSTRAINT_V && c <= CONSTRAINT_Ucm)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'A': return 3;
    case 'C': return 3;
    case 'J': return 3;
    case 'R': return 3;
    case 'U': return 3;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_CnL)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
