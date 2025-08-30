/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/__w/_temp/workspace/build/.build/sparc-zephyr-elf/src/gcc/gcc/config/sparc/sparc.md'.  */

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
extern bool const_scalar_int_operand (rtx, machine_mode);
extern bool const_double_operand (rtx, machine_mode);
extern bool nonimmediate_operand (rtx, machine_mode);
extern bool nonmemory_operand (rtx, machine_mode);
extern bool push_operand (rtx, machine_mode);
extern bool pop_operand (rtx, machine_mode);
extern bool memory_operand (rtx, machine_mode);
extern bool indirect_operand (rtx, machine_mode);
extern bool ordered_comparison_operator (rtx, machine_mode);
extern bool comparison_operator (rtx, machine_mode);
extern bool const_zero_operand (rtx, machine_mode);
extern bool const_all_ones_operand (rtx, machine_mode);
extern bool const_4096_operand (rtx, machine_mode);
extern bool small_int_operand (rtx, machine_mode);
extern bool uns_small_int_operand (rtx, machine_mode);
extern bool const_high_operand (rtx, machine_mode);
extern bool const_compl_high_operand (rtx, machine_mode);
extern bool fp_const_high_losum_operand (rtx, machine_mode);
extern bool const_double_or_vector_operand (rtx, machine_mode);
extern bool zero_or_v7_operand (rtx, machine_mode);
extern bool symbolic_operand (rtx, machine_mode);
extern bool tgd_symbolic_operand (rtx, machine_mode);
extern bool tld_symbolic_operand (rtx, machine_mode);
extern bool tie_symbolic_operand (rtx, machine_mode);
extern bool tle_symbolic_operand (rtx, machine_mode);
extern bool medium_pic_operand (rtx, machine_mode);
extern bool label_ref_operand (rtx, machine_mode);
extern bool data_segment_operand (rtx, machine_mode);
extern bool text_segment_operand (rtx, machine_mode);
extern bool register_or_zero_operand (rtx, machine_mode);
extern bool register_or_v9_zero_operand (rtx, machine_mode);
extern bool register_or_zero_or_all_ones_operand (rtx, machine_mode);
extern bool fp_register_operand (rtx, machine_mode);
extern bool cstore_result_operand (rtx, machine_mode);
extern bool fcc_register_operand (rtx, machine_mode);
extern bool fcc0_register_operand (rtx, machine_mode);
extern bool icc_register_operand (rtx, machine_mode);
extern bool icc_or_fcc_register_operand (rtx, machine_mode);
extern bool arith_operand (rtx, machine_mode);
extern bool arith_double_operand (rtx, machine_mode);
extern bool arith_add_operand (rtx, machine_mode);
extern bool arith_double_add_operand (rtx, machine_mode);
extern bool arith10_operand (rtx, machine_mode);
extern bool arith11_operand (rtx, machine_mode);
extern bool uns_arith_operand (rtx, machine_mode);
extern bool arith5_operand (rtx, machine_mode);
extern bool imm5_operand_dictunpack8 (rtx, machine_mode);
extern bool imm5_operand_dictunpack16 (rtx, machine_mode);
extern bool imm5_operand_dictunpack32 (rtx, machine_mode);
extern bool imm2_operand (rtx, machine_mode);
extern bool compare_operand (rtx, machine_mode);
extern bool input_operand (rtx, machine_mode);
extern bool call_address_operand (rtx, machine_mode);
extern bool call_operand (rtx, machine_mode);
extern bool mem_noofs_operand (rtx, machine_mode);
extern bool nz_comparison_operator (rtx, machine_mode);
extern bool c_comparison_operator (rtx, machine_mode);
extern bool v_comparison_operator (rtx, machine_mode);
extern bool icc_comparison_operator (rtx, machine_mode);
extern bool fcc_comparison_operator (rtx, machine_mode);
extern bool icc_or_fcc_comparison_operator (rtx, machine_mode);
extern bool v9_comparison_operator (rtx, machine_mode);
extern bool v9_register_comparison_operator (rtx, machine_mode);
extern bool cc_arith_operator (rtx, machine_mode);
extern bool cc_arith_not_operator (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_b,
  CONSTRAINT_c,
  CONSTRAINT_d,
  CONSTRAINT_e,
  CONSTRAINT_f,
  CONSTRAINT_h,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_N,
  CONSTRAINT_O,
  CONSTRAINT_P,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_W,
  CONSTRAINT_T,
  CONSTRAINT_p,
  CONSTRAINT_G,
  CONSTRAINT_C,
  CONSTRAINT_q,
  CONSTRAINT_t,
  CONSTRAINT_A,
  CONSTRAINT_H,
  CONSTRAINT_D,
  CONSTRAINT_Q,
  CONSTRAINT_R,
  CONSTRAINT_S,
  CONSTRAINT_Y,
  CONSTRAINT_Z,
  CONSTRAINT_U,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
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
  return c >= CONSTRAINT_r && c <= CONSTRAINT_h;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_W;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_T && c <= CONSTRAINT_T;
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
  if (c >= CONSTRAINT_G && c <= CONSTRAINT_Z)
    return;
  if (c >= CONSTRAINT_U && c <= CONSTRAINT_U)
    {
      *allows_reg = true;
      return;
    }
  if (c >= CONSTRAINT_V && c <= CONSTRAINT__g)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

#define CONSTRAINT_LEN(c_,s_) 1

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
  if (c >= CONSTRAINT_T)
    {
      if (c >= CONSTRAINT_G)
        return CT_FIXED_FORM;
      if (c >= CONSTRAINT_p)
        return CT_ADDRESS;
      return CT_SPECIAL_MEMORY;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
