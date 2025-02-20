// This code was autogenerated by ./tools/ppc-table-gen. Do not modify!
// clang-format off
#include <cstdint>
#include <cstdlib>

#include "xenia/base/assert.h"
#include "xenia/cpu/ppc/ppc_opcode.h"
#include "xenia/cpu/ppc/ppc_opcode_info.h"

namespace xe {
namespace cpu {
namespace ppc {

#define INSTRUCTION(opcode, mnem, form, group, type) \
    {PPCOpcodeGroup::group, PPCOpcodeType::type, nullptr}
PPCOpcodeInfo ppc_opcode_table[] = {
  INSTRUCTION(0x7c000014, "addcx"       , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000114, "addex"       , kXO     , kI, kGeneral),
  INSTRUCTION(0x38000000, "addi"        , kD      , kI, kGeneral),
  INSTRUCTION(0x30000000, "addic"       , kD      , kI, kGeneral),
  INSTRUCTION(0x34000000, "addicx"      , kD      , kI, kGeneral),
  INSTRUCTION(0x3c000000, "addis"       , kD      , kI, kGeneral),
  INSTRUCTION(0x7c0001d4, "addmex"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000214, "addx"        , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000194, "addzex"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000078, "andcx"       , kX      , kI, kGeneral),
  INSTRUCTION(0x74000000, "andisx"      , kD      , kI, kGeneral),
  INSTRUCTION(0x70000000, "andix"       , kD      , kI, kGeneral),
  INSTRUCTION(0x7c000038, "andx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x4c000420, "bcctrx"      , kXL     , kB, kSync   ),
  INSTRUCTION(0x4c000020, "bclrx"       , kXL     , kB, kSync   ),
  INSTRUCTION(0x40000000, "bcx"         , kB      , kB, kSync   ),
  INSTRUCTION(0x48000000, "bx"          , kI      , kB, kSync   ),
  INSTRUCTION(0x7c000000, "cmp"         , kX      , kI, kGeneral),
  INSTRUCTION(0x2c000000, "cmpi"        , kD      , kI, kGeneral),
  INSTRUCTION(0x7c000040, "cmpl"        , kX      , kI, kGeneral),
  INSTRUCTION(0x28000000, "cmpli"       , kD      , kI, kGeneral),
  INSTRUCTION(0x7c000074, "cntlzdx"     , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000034, "cntlzwx"     , kX      , kI, kGeneral),
  INSTRUCTION(0x4c000202, "crand"       , kXL     , kC, kGeneral),
  INSTRUCTION(0x4c000102, "crandc"      , kXL     , kC, kGeneral),
  INSTRUCTION(0x4c000242, "creqv"       , kXL     , kC, kGeneral),
  INSTRUCTION(0x4c0001c2, "crnand"      , kXL     , kC, kGeneral),
  INSTRUCTION(0x4c000042, "crnor"       , kXL     , kC, kGeneral),
  INSTRUCTION(0x4c000382, "cror"        , kXL     , kC, kGeneral),
  INSTRUCTION(0x4c000342, "crorc"       , kXL     , kC, kGeneral),
  INSTRUCTION(0x4c000182, "crxor"       , kXL     , kC, kGeneral),
  INSTRUCTION(0x7c0000ac, "dcbf"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0003ac, "dcbi"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00006c, "dcbst"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00022c, "dcbt"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0001ec, "dcbtst"      , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0007ec, "dcbz"        , kDCBZ   , kM, kGeneral),
  INSTRUCTION(0x7c2007ec, "dcbz128"     , kDCBZ   , kM, kGeneral),
  INSTRUCTION(0x7c000392, "divdux"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c0003d2, "divdx"       , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000396, "divwux"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c0003d6, "divwx"       , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c0006ac, "eieio"       , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000238, "eqvx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000774, "extsbx"      , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000734, "extshx"      , kX      , kI, kGeneral),
  INSTRUCTION(0x7c0007b4, "extswx"      , kX      , kI, kGeneral),
  INSTRUCTION(0xfc000210, "fabsx"       , kX      , kF, kGeneral),
  INSTRUCTION(0xec00002a, "faddsx"      , kA      , kF, kGeneral),
  INSTRUCTION(0xfc00002a, "faddx"       , kA      , kF, kGeneral),
  INSTRUCTION(0xfc00069c, "fcfidx"      , kX      , kF, kGeneral),
  INSTRUCTION(0xfc000040, "fcmpo"       , kX      , kF, kGeneral),
  INSTRUCTION(0xfc000000, "fcmpu"       , kX      , kF, kGeneral),
  INSTRUCTION(0xfc00065c, "fctidx"      , kX      , kF, kGeneral),
  INSTRUCTION(0xfc00065e, "fctidzx"     , kX      , kF, kGeneral),
  INSTRUCTION(0xfc00001c, "fctiwx"      , kX      , kF, kGeneral),
  INSTRUCTION(0xfc00001e, "fctiwzx"     , kX      , kF, kGeneral),
  INSTRUCTION(0xec000024, "fdivsx"      , kA      , kF, kGeneral),
  INSTRUCTION(0xfc000024, "fdivx"       , kA      , kF, kGeneral),
  INSTRUCTION(0xec00003a, "fmaddsx"     , kA      , kF, kGeneral),
  INSTRUCTION(0xfc00003a, "fmaddx"      , kA      , kF, kGeneral),
  INSTRUCTION(0xfc000090, "fmrx"        , kX      , kF, kGeneral),
  INSTRUCTION(0xec000038, "fmsubsx"     , kA      , kF, kGeneral),
  INSTRUCTION(0xfc000038, "fmsubx"      , kA      , kF, kGeneral),
  INSTRUCTION(0xec000032, "fmulsx"      , kA      , kF, kGeneral),
  INSTRUCTION(0xfc000032, "fmulx"       , kA      , kF, kGeneral),
  INSTRUCTION(0xfc000110, "fnabsx"      , kX      , kF, kGeneral),
  INSTRUCTION(0xfc000050, "fnegx"       , kX      , kF, kGeneral),
  INSTRUCTION(0xec00003e, "fnmaddsx"    , kA      , kF, kGeneral),
  INSTRUCTION(0xfc00003e, "fnmaddx"     , kA      , kF, kGeneral),
  INSTRUCTION(0xec00003c, "fnmsubsx"    , kA      , kF, kGeneral),
  INSTRUCTION(0xfc00003c, "fnmsubx"     , kA      , kF, kGeneral),
  INSTRUCTION(0xec000030, "fresx"       , kA      , kF, kGeneral),
  INSTRUCTION(0xfc000018, "frspx"       , kX      , kF, kGeneral),
  INSTRUCTION(0xfc000034, "frsqrtex"    , kA      , kF, kGeneral),
  INSTRUCTION(0xfc00002e, "fselx"       , kA      , kF, kGeneral),
  INSTRUCTION(0xec00002c, "fsqrtsx"     , kA      , kF, kGeneral),
  INSTRUCTION(0xfc00002c, "fsqrtx"      , kA      , kF, kGeneral),
  INSTRUCTION(0xec000028, "fsubsx"      , kA      , kF, kGeneral),
  INSTRUCTION(0xfc000028, "fsubx"       , kA      , kF, kGeneral),
  INSTRUCTION(0x7c0007ac, "icbi"        , kX      , kM, kGeneral),
  INSTRUCTION(0x4c00012c, "isync"       , kXL     , kI, kGeneral),
  INSTRUCTION(0x88000000, "lbz"         , kD      , kM, kGeneral),
  INSTRUCTION(0x8c000000, "lbzu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c0000ee, "lbzux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0000ae, "lbzx"        , kX      , kM, kGeneral),
  INSTRUCTION(0xe8000000, "ld"          , kDS     , kM, kGeneral),
  INSTRUCTION(0x7c0000a8, "ldarx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c000428, "ldbrx"       , kX      , kM, kGeneral),
  INSTRUCTION(0xe8000001, "ldu"         , kDS     , kM, kGeneral),
  INSTRUCTION(0x7c00006a, "ldux"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00002a, "ldx"         , kX      , kM, kGeneral),
  INSTRUCTION(0xc8000000, "lfd"         , kD      , kM, kGeneral),
  INSTRUCTION(0xcc000000, "lfdu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c0004ee, "lfdux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0004ae, "lfdx"        , kX      , kM, kGeneral),
  INSTRUCTION(0xc0000000, "lfs"         , kD      , kM, kGeneral),
  INSTRUCTION(0xc4000000, "lfsu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00046e, "lfsux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00042e, "lfsx"        , kX      , kM, kGeneral),
  INSTRUCTION(0xa8000000, "lha"         , kD      , kM, kGeneral),
  INSTRUCTION(0xac000000, "lhau"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c0002ee, "lhaux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0002ae, "lhax"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00062c, "lhbrx"       , kX      , kM, kGeneral),
  INSTRUCTION(0xa0000000, "lhz"         , kD      , kM, kGeneral),
  INSTRUCTION(0xa4000000, "lhzu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00026e, "lhzux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00022e, "lhzx"        , kX      , kM, kGeneral),
  INSTRUCTION(0xb8000000, "lmw"         , kD      , kM, kGeneral),
  INSTRUCTION(0x7c0004aa, "lswi"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00042a, "lswx"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00000e, "lvebx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00004e, "lvehx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00008e, "lvewx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x10000083, "lvewx128"    , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00040e, "lvlx"        , kX      , kM, kGeneral),
  INSTRUCTION(0x10000403, "lvlx128"     , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00060e, "lvlxl"       , kX      , kM, kGeneral),
  INSTRUCTION(0x10000603, "lvlxl128"    , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00044e, "lvrx"        , kX      , kM, kGeneral),
  INSTRUCTION(0x10000443, "lvrx128"     , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00064e, "lvrxl"       , kX      , kM, kGeneral),
  INSTRUCTION(0x10000643, "lvrxl128"    , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00000c, "lvsl"        , kX      , kV, kGeneral),
  INSTRUCTION(0x10000003, "lvsl128"     , kVX128_1, kV, kGeneral),
  INSTRUCTION(0x7c00004c, "lvsr"        , kX      , kV, kGeneral),
  INSTRUCTION(0x10000043, "lvsr128"     , kVX128_1, kV, kGeneral),
  INSTRUCTION(0x7c0000ce, "lvx"         , kX      , kM, kGeneral),
  INSTRUCTION(0x100000c3, "lvx128"      , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c0002ce, "lvxl"        , kX      , kM, kGeneral),
  INSTRUCTION(0x100002c3, "lvxl128"     , kVX128_1, kM, kGeneral),
  INSTRUCTION(0xe8000002, "lwa"         , kDS     , kM, kGeneral),
  INSTRUCTION(0x7c000028, "lwarx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0002ea, "lwaux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0002aa, "lwax"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00042c, "lwbrx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x80000000, "lwz"         , kD      , kM, kGeneral),
  INSTRUCTION(0x84000000, "lwzu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00006e, "lwzux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00002e, "lwzx"        , kX      , kM, kGeneral),
  INSTRUCTION(0x4c000000, "mcrf"        , kXL     , kC, kGeneral),
  INSTRUCTION(0xfc000080, "mcrfs"       , kX      , kC, kGeneral),
  INSTRUCTION(0x7c000400, "mcrxr"       , kX      , kC, kGeneral),
  INSTRUCTION(0x7c000026, "mfcr"        , kX      , kC, kGeneral),
  INSTRUCTION(0xfc00048e, "mffsx"       , kX      , kC, kGeneral),
  INSTRUCTION(0x7c0000a6, "mfmsr"       , kX      , kC, kSync   ),
  INSTRUCTION(0x7c0002a6, "mfspr"       , kXFX    , kC, kGeneral),
  INSTRUCTION(0x7c0002e6, "mftb"        , kXFX    , kC, kGeneral),
  INSTRUCTION(0x10000604, "mfvscr"      , kVX     , kC, kGeneral),
  INSTRUCTION(0x7c000120, "mtcrf"       , kXFX    , kC, kGeneral),
  INSTRUCTION(0xfc00008c, "mtfsb0x"     , kX      , kC, kGeneral),
  INSTRUCTION(0xfc00004c, "mtfsb1x"     , kX      , kC, kGeneral),
  INSTRUCTION(0xfc00010c, "mtfsfix"     , kX      , kC, kGeneral),
  INSTRUCTION(0xfc00058e, "mtfsfx"      , kXFL    , kC, kGeneral),
  INSTRUCTION(0x7c000124, "mtmsr"       , kX      , kC, kSync   ),
  INSTRUCTION(0x7c000164, "mtmsrd"      , kX      , kC, kSync   ),
  INSTRUCTION(0x7c0003a6, "mtspr"       , kXFX    , kC, kGeneral),
  INSTRUCTION(0x10000644, "mtvscr"      , kVX     , kC, kGeneral),
  INSTRUCTION(0x7c000012, "mulhdux"     , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000092, "mulhdx"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000016, "mulhwux"     , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000096, "mulhwx"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c0001d2, "mulldx"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x1c000000, "mulli"       , kD      , kI, kGeneral),
  INSTRUCTION(0x7c0001d6, "mullwx"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c0003b8, "nandx"       , kX      , kI, kGeneral),
  INSTRUCTION(0x7c0000d0, "negx"        , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c0000f8, "norx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000338, "orcx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x60000000, "ori"         , kD      , kI, kGeneral),
  INSTRUCTION(0x64000000, "oris"        , kD      , kI, kGeneral),
  INSTRUCTION(0x7c000378, "orx"         , kX      , kI, kGeneral),
  INSTRUCTION(0x78000010, "rldclx"      , kMDS    , kI, kGeneral),
  INSTRUCTION(0x78000012, "rldcrx"      , kMDS    , kI, kGeneral),
  INSTRUCTION(0x78000000, "rldiclx"     , kMD     , kI, kGeneral),
  INSTRUCTION(0x78000004, "rldicrx"     , kMD     , kI, kGeneral),
  INSTRUCTION(0x78000008, "rldicx"      , kMD     , kI, kGeneral),
  INSTRUCTION(0x7800000c, "rldimix"     , kMD     , kI, kGeneral),
  INSTRUCTION(0x50000000, "rlwimix"     , kM      , kI, kGeneral),
  INSTRUCTION(0x54000000, "rlwinmx"     , kM      , kI, kGeneral),
  INSTRUCTION(0x5c000000, "rlwnmx"      , kM      , kI, kGeneral),
  INSTRUCTION(0x44000002, "sc"          , kSC     , kB, kSync   ),
  INSTRUCTION(0x7c000036, "sldx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000030, "slwx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000674, "sradix"      , kXS     , kI, kGeneral),
  INSTRUCTION(0x7c000634, "sradx"       , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000670, "srawix"      , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000630, "srawx"       , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000436, "srdx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000430, "srwx"        , kX      , kI, kGeneral),
  INSTRUCTION(0x98000000, "stb"         , kD      , kM, kGeneral),
  INSTRUCTION(0x9c000000, "stbu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c0001ee, "stbux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0001ae, "stbx"        , kX      , kM, kGeneral),
  INSTRUCTION(0xf8000000, "std"         , kDS     , kM, kGeneral),
  INSTRUCTION(0x7c000528, "stdbrx"      , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0001ad, "stdcx"       , kX      , kM, kGeneral),
  INSTRUCTION(0xf8000001, "stdu"        , kDS     , kM, kGeneral),
  INSTRUCTION(0x7c00016a, "stdux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00012a, "stdx"        , kX      , kM, kGeneral),
  INSTRUCTION(0xd8000000, "stfd"        , kD      , kM, kGeneral),
  INSTRUCTION(0xdc000000, "stfdu"       , kD      , kM, kGeneral),
  INSTRUCTION(0x7c0005ee, "stfdux"      , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0005ae, "stfdx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c0007ae, "stfiwx"      , kX      , kM, kGeneral),
  INSTRUCTION(0xd0000000, "stfs"        , kD      , kM, kGeneral),
  INSTRUCTION(0xd4000000, "stfsu"       , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00056e, "stfsux"      , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00052e, "stfsx"       , kX      , kM, kGeneral),
  INSTRUCTION(0xb0000000, "sth"         , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00072c, "sthbrx"      , kX      , kM, kGeneral),
  INSTRUCTION(0xb4000000, "sthu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00036e, "sthux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00032e, "sthx"        , kX      , kM, kGeneral),
  INSTRUCTION(0xbc000000, "stmw"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c0005aa, "stswi"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00052a, "stswx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00010e, "stvebx"      , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00014e, "stvehx"      , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00018e, "stvewx"      , kX      , kM, kGeneral),
  INSTRUCTION(0x10000183, "stvewx128"   , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00050e, "stvlx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x10000503, "stvlx128"    , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00070e, "stvlxl"      , kX      , kM, kGeneral),
  INSTRUCTION(0x10000703, "stvlxl128"   , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00054e, "stvrx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x10000543, "stvrx128"    , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c00074e, "stvrxl"      , kX      , kM, kGeneral),
  INSTRUCTION(0x10000743, "stvrxl128"   , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c0001ce, "stvx"        , kX      , kM, kGeneral),
  INSTRUCTION(0x100001c3, "stvx128"     , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x7c0003ce, "stvxl"       , kX      , kM, kGeneral),
  INSTRUCTION(0x100003c3, "stvxl128"    , kVX128_1, kM, kGeneral),
  INSTRUCTION(0x90000000, "stw"         , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00052c, "stwbrx"      , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00012d, "stwcx"       , kX      , kM, kGeneral),
  INSTRUCTION(0x94000000, "stwu"        , kD      , kM, kGeneral),
  INSTRUCTION(0x7c00016e, "stwux"       , kX      , kM, kGeneral),
  INSTRUCTION(0x7c00012e, "stwx"        , kX      , kM, kGeneral),
  INSTRUCTION(0x7c000010, "subfcx"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000110, "subfex"      , kXO     , kI, kGeneral),
  INSTRUCTION(0x20000000, "subficx"     , kD      , kI, kGeneral),
  INSTRUCTION(0x7c0001d0, "subfmex"     , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000050, "subfx"       , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c000190, "subfzex"     , kXO     , kI, kGeneral),
  INSTRUCTION(0x7c0004ac, "sync"        , kX      , kI, kGeneral),
  INSTRUCTION(0x7c000088, "td"          , kX      , kB, kGeneral),
  INSTRUCTION(0x08000000, "tdi"         , kD      , kB, kGeneral),
  INSTRUCTION(0x7c000008, "tw"          , kX      , kB, kGeneral),
  INSTRUCTION(0x0c000000, "twi"         , kD      , kB, kGeneral),
  INSTRUCTION(0x10000180, "vaddcuw"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000000a, "vaddfp"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000010, "vaddfp128"   , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000300, "vaddsbs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000340, "vaddshs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000380, "vaddsws"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000000, "vaddubm"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000200, "vaddubs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000040, "vadduhm"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000240, "vadduhs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000080, "vadduwm"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000280, "vadduws"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000404, "vand"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000210, "vand128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000444, "vandc"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000250, "vandc128"    , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000502, "vavgsb"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000542, "vavgsh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000582, "vavgsw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000402, "vavgub"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000442, "vavguh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000482, "vavguw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000230, "vcfpsxws128" , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x18000270, "vcfpuxws128" , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000034a, "vcfsx"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000030a, "vcfux"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x100003c6, "vcmpbfp"     , kVC     , kV, kGeneral),
  INSTRUCTION(0x18000180, "vcmpbfp128"  , kVX128_R, kV, kGeneral),
  INSTRUCTION(0x100000c6, "vcmpeqfp"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x18000000, "vcmpeqfp128" , kVX128_R, kV, kGeneral),
  INSTRUCTION(0x10000006, "vcmpequb"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x10000046, "vcmpequh"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x10000086, "vcmpequw"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x18000200, "vcmpequw128" , kVX128_R, kV, kGeneral),
  INSTRUCTION(0x100001c6, "vcmpgefp"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x18000080, "vcmpgefp128" , kVX128_R, kV, kGeneral),
  INSTRUCTION(0x100002c6, "vcmpgtfp"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x18000100, "vcmpgtfp128" , kVX128_R, kV, kGeneral),
  INSTRUCTION(0x10000306, "vcmpgtsb"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x10000346, "vcmpgtsh"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x10000386, "vcmpgtsw"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x10000206, "vcmpgtub"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x10000246, "vcmpgtuh"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x10000286, "vcmpgtuw"    , kVC     , kV, kGeneral),
  INSTRUCTION(0x180002b0, "vcsxwfp128"  , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x100003ca, "vctsxs"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000038a, "vctuxs"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x180002f0, "vcuxwfp128"  , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000018a, "vexptefp"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x180006b0, "vexptefp128" , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x100001ca, "vlogefp"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x180006f0, "vlogefp128"  , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x14000110, "vmaddcfp128" , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000002e, "vmaddfp"     , kVA     , kV, kGeneral),
  INSTRUCTION(0x140000d0, "vmaddfp128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000040a, "vmaxfp"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000280, "vmaxfp128"   , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000102, "vmaxsb"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000142, "vmaxsh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000182, "vmaxsw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000002, "vmaxub"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000042, "vmaxuh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000082, "vmaxuw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000020, "vmhaddshs"   , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000021, "vmhraddshs"  , kVA     , kV, kGeneral),
  INSTRUCTION(0x1000044a, "vminfp"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x180002c0, "vminfp128"   , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000302, "vminsb"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000342, "vminsh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000382, "vminsw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000202, "vminub"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000242, "vminuh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000282, "vminuw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000022, "vmladduhm"   , kVA     , kV, kGeneral),
  INSTRUCTION(0x1000000c, "vmrghb"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000004c, "vmrghh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000008c, "vmrghw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000300, "vmrghw128"   , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000010c, "vmrglb"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000014c, "vmrglh"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000018c, "vmrglw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000340, "vmrglw128"   , kVX128  , kV, kGeneral),
  INSTRUCTION(0x14000190, "vmsum3fp128" , kVX128  , kV, kGeneral),
  INSTRUCTION(0x140001d0, "vmsum4fp128" , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000025, "vmsummbm"    , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000028, "vmsumshm"    , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000029, "vmsumshs"    , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000024, "vmsumubm"    , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000026, "vmsumuhm"    , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000027, "vmsumuhs"    , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000308, "vmulesb"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000348, "vmulesh"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000208, "vmuleub"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000248, "vmuleuh"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000090, "vmulfp128"   , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000108, "vmulosb"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000148, "vmulosh"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000008, "vmuloub"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000048, "vmulouh"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000002f, "vnmsubfp"    , kVA     , kV, kGeneral),
  INSTRUCTION(0x14000150, "vnmsubfp128" , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000504, "vnor"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000290, "vnor128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000484, "vor"         , kVX     , kV, kGeneral),
  INSTRUCTION(0x140002d0, "vor128"      , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000002b, "vperm"       , kVA     , kV, kGeneral),
  INSTRUCTION(0x14000000, "vperm128"    , kVX128_2, kV, kGeneral),
  INSTRUCTION(0x18000210, "vpermwi128"  , kVX128_P, kV, kGeneral),
  INSTRUCTION(0x18000610, "vpkd3d128"   , kVX128_4, kV, kGeneral),
  INSTRUCTION(0x1000030e, "vpkpx"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000018e, "vpkshss"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000200, "vpkshss128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000010e, "vpkshus"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000240, "vpkshus128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x100001ce, "vpkswss"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000280, "vpkswss128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000014e, "vpkswus"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x140002c0, "vpkswus128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000000e, "vpkuhum"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000300, "vpkuhum128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000008e, "vpkuhus"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000340, "vpkuhus128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000004e, "vpkuwum"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000380, "vpkuwum128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x100000ce, "vpkuwus"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x140003c0, "vpkuwus128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000010a, "vrefp"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000630, "vrefp128"    , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x100002ca, "vrfim"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000330, "vrfim128"    , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000020a, "vrfin"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000370, "vrfin128"    , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000028a, "vrfip"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x180003b0, "vrfip128"    , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000024a, "vrfiz"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x180003f0, "vrfiz128"    , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x10000004, "vrlb"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000044, "vrlh"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000710, "vrlimi128"   , kVX128_4, kV, kGeneral),
  INSTRUCTION(0x10000084, "vrlw"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000050, "vrlw128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000014a, "vrsqrtefp"   , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000670, "vrsqrtefp128", kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000002a, "vsel"        , kVA     , kV, kGeneral),
  INSTRUCTION(0x14000350, "vsel128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x100001c4, "vsl"         , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000104, "vslb"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000002c, "vsldoi"      , kVA     , kV, kGeneral),
  INSTRUCTION(0x10000010, "vsldoi128"   , kVX128_5, kV, kGeneral),
  INSTRUCTION(0x10000144, "vslh"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000040c, "vslo"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000390, "vslo128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000184, "vslw"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x180000d0, "vslw128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000020c, "vspltb"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000024c, "vsplth"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000030c, "vspltisb"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000034c, "vspltish"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000038c, "vspltisw"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000770, "vspltisw128" , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000028c, "vspltw"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000730, "vspltw128"   , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x100002c4, "vsr"         , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000304, "vsrab"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000344, "vsrah"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000384, "vsraw"       , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000150, "vsraw128"    , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000204, "vsrb"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000244, "vsrh"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000044c, "vsro"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x140003d0, "vsro128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000284, "vsrw"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x180001d0, "vsrw128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000580, "vsubcuw"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000004a, "vsubfp"      , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000050, "vsubfp128"   , kVX128  , kV, kGeneral),
  INSTRUCTION(0x10000700, "vsubsbs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000740, "vsubshs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000780, "vsubsws"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000400, "vsububm"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000600, "vsububs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000440, "vsubuhm"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000640, "vsubuhs"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000480, "vsubuwm"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000680, "vsubuws"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000688, "vsum2sws"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000708, "vsum4sbs"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000648, "vsum4shs"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000608, "vsum4ubs"    , kVX     , kV, kGeneral),
  INSTRUCTION(0x10000788, "vsumsws"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x180007f0, "vupkd3d128"  , kVX128_3, kV, kGeneral),
  INSTRUCTION(0x1000034e, "vupkhpx"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000020e, "vupkhsb"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x18000380, "vupkhsb128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x1000024e, "vupkhsh"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x100003ce, "vupklpx"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x1000028e, "vupklsb"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x180003c0, "vupklsb128"  , kVX128  , kV, kGeneral),
  INSTRUCTION(0x100002ce, "vupklsh"     , kVX     , kV, kGeneral),
  INSTRUCTION(0x100004c4, "vxor"        , kVX     , kV, kGeneral),
  INSTRUCTION(0x14000310, "vxor128"     , kVX128  , kV, kGeneral),
  INSTRUCTION(0x68000000, "xori"        , kD      , kI, kGeneral),
  INSTRUCTION(0x6c000000, "xoris"       , kD      , kI, kGeneral),
  INSTRUCTION(0x7c000278, "xorx"        , kX      , kI, kGeneral),
};
#undef INSTRUCTION
static_assert(sizeof(ppc_opcode_table) / sizeof(PPCOpcodeInfo) == static_cast<int>(PPCOpcode::kInvalid), "PPC table mismatch - rerun ppc-table-gen");

const PPCOpcodeInfo& GetOpcodeInfo(PPCOpcode opcode) {
  return ppc_opcode_table[static_cast<int>(opcode)];
}
void RegisterOpcodeEmitter(PPCOpcode opcode, InstrEmitFn fn) {
  assert_null(ppc_opcode_table[static_cast<int>(opcode)].emit);
  ppc_opcode_table[static_cast<int>(opcode)].emit = fn;
}

}  // namespace ppc
}  // namespace cpu
}  // namespace xe
