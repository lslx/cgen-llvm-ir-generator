#include "llvm/IR/Constants.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

// Test generating some register information

void createRegisters(llvm::Module &M) {
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, false)),
                           "pc");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "gp");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "fp");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "sp");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "ra");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "ea");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "ba");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r0");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r1");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r2");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r3");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r4");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r5");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r6");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r7");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r8");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r9");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r10");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r11");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r12");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r13");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r14");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r15");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r16");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r17");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r18");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r19");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r20");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r21");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r22");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r23");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r24");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "r25");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "IE");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "IM");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "IP");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "ICC");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "DCC");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "CC");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "CFG");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "EBA");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "DC");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "DEBA");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "JTX");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "JRX");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "BP0");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "BP1");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "BP2");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "BP3");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "WP0");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "WP1");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "WP2");
  new llvm::GlobalVariable(M, llvm::Type::getInt32Ty(llvm::getGlobalContext()),
                           false,
                           llvm::GlobalValue::LinkageTypes::ExternalLinkage,
                           llvm::ConstantInt::get(llvm::getGlobalContext(),
                                                  llvm::APInt(32, 0, true)),
                           "WP3");
}