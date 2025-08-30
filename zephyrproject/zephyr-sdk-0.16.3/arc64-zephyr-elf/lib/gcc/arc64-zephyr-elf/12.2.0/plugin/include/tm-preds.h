/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/__w/_temp/workspace/build/.build/arc64-zephyr-elf/src/gcc/gcc/config/arc64/arc64.md'.  */

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
extern bool arc64_movl_operand (rtx, machine_mode);
extern bool arc64_movf_operand (rtx, machine_mode);
extern bool arc64_regsym_operand (rtx, machine_mode);
extern bool arc64_nonmem_operand (rtx, machine_mode);
extern bool arc64_reg_or_unsig_operand (rtx, machine_mode);
extern bool arc64_immediate_or_pic (rtx, machine_mode);
extern bool arc64_call_insn_operand (rtx, machine_mode);
extern bool cc_compare_operator (rtx, machine_mode);
extern bool equality_comparison_operator (rtx, machine_mode);
extern bool ccmode_comparison_operator (rtx, machine_mode);
extern bool core_register_operand (rtx, machine_mode);
extern bool arc64_comparison_operator (rtx, machine_mode);
extern bool cc_register (rtx, machine_mode);
extern bool S06S0_immediate_operand (rtx, machine_mode);
extern bool vectdup_immediate_operand (rtx, machine_mode);
extern bool limm_ldst_operand (rtx, machine_mode);
extern bool _1_2_3_operand (rtx, machine_mode);
extern bool _2_4_8_operand (rtx, machine_mode);
extern bool arc64_dest_operand (rtx, machine_mode);
extern bool mem_noofs_operand (rtx, machine_mode);
extern bool arc64_fsimd_register (rtx, machine_mode);
extern bool arc64_fsimd_moperand (rtx, machine_mode);
extern bool short_immediate_operand (rtx, machine_mode);
extern bool unsign_immediate_operand (rtx, machine_mode);
extern bool usigned32b_operand (rtx, machine_mode);
extern bool signed32b_operand (rtx, machine_mode);
extern bool bbitimm_operand (rtx, machine_mode);
extern bool brcc_comparison_operator (rtx, machine_mode);
extern bool ebrcc_comparison_operator (rtx, machine_mode);
extern bool plt34_symbol_p (rtx, machine_mode);
extern bool const0_operand (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_q,
  CONSTRAINT_Sbreg,
  CONSTRAINT_w,
  CONSTRAINT_c,
  CONSTRAINT_N06Sx,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_Ucnst,
  CONSTRAINT_Uldms,
  CONSTRAINT_Ustms,
  CONSTRAINT_Ufpms,
  CONSTRAINT_Ustor,
  CONSTRAINT_Ustw6,
  CONSTRAINT_ATOMC,
  CONSTRAINT_p,
  CONSTRAINT_BLsym,
  CONSTRAINT_U06M1,
  CONSTRAINT_SymMV,
  CONSTRAINT_SymIm,
  CONSTRAINT_S32S0,
  CONSTRAINT_U32S0,
  CONSTRAINT_S06S0,
  CONSTRAINT_SyPic,
  CONSTRAINT_U06Sx,
  CONSTRAINT_S12Sx,
  CONSTRAINT_S03MV,
  CONSTRAINT_G,
  CONSTRAINT_U0000,
  CONSTRAINT_U0001,
  CONSTRAINT_U0008,
  CONSTRAINT_U0016,
  CONSTRAINT_U06S0,
  CONSTRAINT_U06S1,
  CONSTRAINT_U06S2,
  CONSTRAINT_U06S3,
  CONSTRAINT_S12S0,
  CONSTRAINT_S12S1,
  CONSTRAINT_S12S2,
  CONSTRAINT_S12S3,
  CONSTRAINT_S03S0,
  CONSTRAINT_U07S0,
  CONSTRAINT_U03S0,
  CONSTRAINT_S11S0,
  CONSTRAINT_U05S0,
  CONSTRAINT_S09S0,
  CONSTRAINT_S21S0,
  CONSTRAINT_S25S0,
  CONSTRAINT_S10S0,
  CONSTRAINT_S07S0,
  CONSTRAINT_S13S0,
  CONSTRAINT_S08S0,
  CONSTRAINT_U10S0,
  CONSTRAINT_U08S0,
  CONSTRAINT_U09S0,
  CONSTRAINT_U12S0,
  CONSTRAINT_U16S0,
  CONSTRAINT_S16S0,
  CONSTRAINT_h,
  CONSTRAINT_accum,
  CONSTRAINT_accrn,
  CONSTRAINT_SR__R0,
  CONSTRAINT_SR__R1,
  CONSTRAINT_SR__SP,
  CONSTRAINT_SR__GP,
  CONSTRAINT_SRPCL,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_Ustk_l,
  CONSTRAINT_Ustk_g,
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
  int i = (int) c - (int) CONSTRAINT_N06Sx;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_c;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_ATOMC;
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
  if (c >= CONSTRAINT_BLsym && c <= CONSTRAINT_S16S0)
    return;
  if (c >= CONSTRAINT_h && c <= CONSTRAINT_SRPCL)
    {
      *allows_reg = true;
      return;
    }
  if (c >= CONSTRAINT_V && c <= CONSTRAINT_Ustk_g)
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
    case 'A': return 5;
    case 'B': return 5;
    case 'N': return 5;
    case 'S': return 5;
    case 'U': return 5;
    case 'a': return 5;
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
      if (c >= CONSTRAINT_BLsym)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_N06Sx)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
