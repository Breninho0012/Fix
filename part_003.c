    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      uVar8 = **(uint **)(param_1 + 0x20);
      if ((uVar8 != 0) && (*(uint *)(param_1 + 0x38) < uVar8)) {
        *(uint *)(param_1 + 0x38) = uVar8;
      }
    }
    else {
      uVar8 = 0;
    }
    iVar2 = **(int **)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 0x38);
    uVar7 = iVar3 - iVar2;
    uVar9 = (int)uVar7 >> 0x1f;
    if ((uVar6 <= uVar9) && ((uVar6 < uVar9 || (uVar10 <= uVar7)))) {
      if ((uVar10 != 0 || uVar6 != 0) &&
         ((((param_9 & 1) != 0 && (iVar1 == 0)) || (((param_9 & 2) != 0 && (uVar8 == 0)))))) {
        func_0x00468710(0xffffffff,0xffffffff);
        return param_2;
      }
      if (((param_9 & 1) != 0) && (iVar1 != 0)) {
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = uVar10 + iVar2;
        **(int **)(param_1 + 0x2c) = iVar3 - (uVar10 + iVar2);
      }
      if (((param_9 & 2) != 0) && (uVar8 != 0)) {
        iVar1 = **(int **)(param_1 + 0x30);
        iVar3 = **(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x10) = iVar2;
        **(int **)(param_1 + 0x20) = uVar10 + iVar2;
        **(int **)(param_1 + 0x30) = (iVar1 + iVar3) - (uVar10 + iVar2);
      }
      *param_2 = uVar10;
      param_2[1] = uVar6;
      goto LAB_00468be9;
    }
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
LAB_00468be9:
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_2;
}



undefined4 * __thiscall
FUN_00468c10(int param_1,undefined4 *param_2,uint param_3,int param_4,int param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_10;
  uint uStack_c;
  
  if (((param_6 & 1) == 0) || ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((param_6 & 2) == 0) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar4) || (bVar5)) goto LAB_00468dd4;
  iVar1 = **(int **)(param_1 + 0x1c);
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    uVar11 = **(uint **)(param_1 + 0x20);
    if ((uVar11 != 0) && (*(uint *)(param_1 + 0x38) < uVar11)) {
      *(uint *)(param_1 + 0x38) = uVar11;
    }
  }
  else {
    uVar11 = 0;
  }
  iVar2 = **(int **)(param_1 + 0xc);
  uVar6 = *(int *)(param_1 + 0x38) - iVar2;
  uVar10 = (int)uVar6 >> 0x1f;
  if (param_5 == 0) {
    uStack_c = 0;
    uStack_10 = 0;
  }
  else if (param_5 == 1) {
    if ((param_6 & 3) == 3) goto LAB_00468dd4;
    if ((param_6 & 1) == 0) {
      if (((param_6 & 2) == 0) || ((uVar11 == 0 && (iVar2 != 0)))) goto LAB_00468dd4;
      uStack_c = (int)(uVar11 - iVar2) >> 0x1f;
      uStack_10 = uVar11 - iVar2;
    }
    else {
      if ((iVar1 == 0) && (iVar2 != 0)) goto LAB_00468dd4;
      uStack_c = iVar1 - iVar2 >> 0x1f;
      uStack_10 = iVar1 - iVar2;
    }
  }
  else {
    uStack_c = uVar10;
    uStack_10 = uVar6;
    if (param_5 != 2) goto LAB_00468dd4;
  }
  uVar8 = uStack_10 + param_3;
  uVar7 = uStack_c + param_4 + (uint)CARRY4(uStack_10,param_3);
  if ((uVar7 <= uVar10) && ((uVar7 < uVar10 || (uVar8 <= uVar6)))) {
    if ((uVar8 != 0 || uVar7 != 0) &&
       ((((param_6 & 1) != 0 && (iVar1 == 0)) || (((param_6 & 2) != 0 && (uVar11 == 0)))))) {
      func_0x00468710(0xffffffff,0xffffffff);
      return param_2;
    }
    iVar9 = uVar8 + iVar2;
    if (((param_6 & 1) != 0) && (iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x38);
      **(int **)(param_1 + 0xc) = iVar2;
      **(int **)(param_1 + 0x1c) = iVar9;
      **(int **)(param_1 + 0x2c) = iVar1 - iVar9;
    }
    if (((param_6 & 2) != 0) && (uVar11 != 0)) {
      iVar1 = **(int **)(param_1 + 0x30);
      iVar3 = **(int **)(param_1 + 0x20);
      **(int **)(param_1 + 0x10) = iVar2;
      **(int **)(param_1 + 0x20) = iVar9;
      **(int **)(param_1 + 0x30) = (iVar1 + iVar3) - iVar9;
    }
    func_0x00468710(uVar8,uVar7);
    return param_2;
  }
LAB_00468dd4:
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  return param_2;
}



uint __fastcall FUN_00468e10(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  pbVar2 = (byte *)*piVar1;
  if (pbVar2 != (byte *)0x0) {
    if (pbVar2 < pbVar2 + **(int **)(param_1 + 0x2c)) {
      return (uint)*pbVar2;
    }
    pbVar3 = (byte *)**(undefined4 **)(param_1 + 0x20);
    if ((pbVar3 != (byte *)0x0) && ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
      pbVar5 = *(byte **)(param_1 + 0x38);
      if (*(byte **)(param_1 + 0x38) < pbVar3) {
        pbVar5 = pbVar3;
      }
      if (pbVar2 < pbVar5) {
        *(byte **)(param_1 + 0x38) = pbVar5;
        iVar4 = *piVar1;
        *piVar1 = iVar4;
        **(int **)(param_1 + 0x2c) = (int)pbVar5 - iVar4;
        return (uint)*(byte *)**(undefined4 **)(param_1 + 0x1c);
      }
    }
  }
  return 0xffffffff;
}



// Library Function - Single Match
//  protected: virtual int __thiscall std::basic_stringbuf<char,struct std::char_traits<char>,class
// std::allocator<char> >::pbackfail(int)
// 
// Library: Visual Studio 2019 Release

int __thiscall
_pbackfail___basic_stringbuf_DU__char_traits_D_std__V__allocator_D_2__std__MAEHH_Z
          (int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = **(uint **)(param_1 + 0x1c);
  if (((uVar1 != 0) && (**(uint **)(param_1 + 0xc) < uVar1)) &&
     ((param_2 == -1 ||
      (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)))))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
    if (param_2 == -1) {
      param_2 = 0;
    }
    else {
      *(char *)**(undefined4 **)(param_1 + 0x1c) = (char)param_2;
    }
    return param_2;
  }
  return -1;
}



int __thiscall FUN_00468ee0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  size_t _Size;
  void *pvStack_8;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar2 = **(uint **)(param_1 + 0x20);
  iVar4 = **(int **)(param_1 + 0x30);
  uVar1 = iVar4 + uVar2;
  if (uVar2 == 0) {
    _Size = 0;
    pvStack_8 = (void *)**(int **)(param_1 + 0xc);
  }
  else {
    if (uVar2 < uVar1) {
      **(int **)(param_1 + 0x30) = iVar4 + -1;
      puVar3 = (undefined1 *)**(int **)(param_1 + 0x20);
      **(int **)(param_1 + 0x20) = (int)(puVar3 + 1);
      *puVar3 = (char)param_2;
      *(uint *)(param_1 + 0x38) = uVar2 + 1;
      return param_2;
    }
    pvStack_8 = (void *)**(int **)(param_1 + 0xc);
    _Size = uVar1 - (int)pvStack_8;
    if (0x1f < _Size) {
      if (_Size < 0x3fffffff) {
        iVar4 = _Size * 2;
      }
      else {
        if (0x7ffffffe < _Size) {
          return -1;
        }
        iVar4 = 0x7fffffff;
      }
      goto LAB_00468f87;
    }
  }
  iVar4 = 0x20;
LAB_00468f87:
  _Dst = (void *)func_0x0046c950(iVar4);
  memcpy(_Dst,pvStack_8,_Size);
  iVar5 = (int)_Dst + _Size;
  *(int *)(param_1 + 0x38) = iVar5 + 1;
  **(undefined4 **)(param_1 + 0x10) = _Dst;
  **(int **)(param_1 + 0x20) = iVar5;
  **(int **)(param_1 + 0x30) = (int)_Dst + (iVar4 - iVar5);
  if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    iVar5 = (**(int **)(param_1 + 0x1c) - (int)pvStack_8) + (int)_Dst;
    **(undefined4 **)(param_1 + 0xc) = _Dst;
    **(int **)(param_1 + 0x1c) = iVar5;
    **(int **)(param_1 + 0x2c) = iVar4 - iVar5;
  }
  else {
    **(undefined4 **)(param_1 + 0xc) = _Dst;
    **(undefined4 **)(param_1 + 0x1c) = _Dst;
    **(undefined4 **)(param_1 + 0x2c) = 0;
  }
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    func_0x0046aa00(pvStack_8,_Size);
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
  **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + -1;
  puVar3 = (undefined1 *)**(int **)(param_1 + 0x20);
  **(int **)(param_1 + 0x20) = (int)(puVar3 + 1);
  *puVar3 = (char)param_2;
  return param_2;
}



undefined4 __fastcall FUN_00469110(undefined4 param_1)

{
  return param_1;
}



// Library Function - Single Match
//  protected: virtual class std::fpos<struct _Mbstatet> __thiscall std::basic_streambuf<char,struct
// std::char_traits<char> >::seekpos(class std::fpos<struct _Mbstatet>,int)
// 
// Library: Visual Studio 2019 Release

void _seekpos___basic_streambuf_DU__char_traits_D_std___std__MAE_AV__fpos_U_Mbstatet___2_V32_H_Z
               (undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// Library Function - Single Match
//  protected: virtual class std::fpos<struct _Mbstatet> __thiscall std::basic_streambuf<char,struct
// std::char_traits<char> >::seekoff(__int64,int,int)
// 
// Library: Visual Studio 2019 Release

void _seekoff___basic_streambuf_DU__char_traits_D_std___std__MAE_AV__fpos_U_Mbstatet___2__JHH_Z
               (undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



undefined8 __thiscall FUN_00469180(int *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint _Size;
  uint uVar4;
  bool bVar5;
  int iStack_18;
  
  iVar3 = param_4;
  uVar4 = param_3;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    do {
      if (*(void **)param_1[8] == (void *)0x0) {
        _Size = 0;
      }
      else {
        _Size = *(uint *)param_1[0xc];
      }
      iStack_18 = (int)_Size >> 0x1f;
      if ((iStack_18 < 0) || ((-1 < (int)_Size || iStack_18 < 0 && (_Size == 0)))) {
        pcVar1 = *(code **)(*param_1 + 0xc);
        _guard_check_icall(*param_2);
        iVar2 = (*pcVar1)();
        if (iVar2 == -1) break;
        bVar5 = uVar4 != 0;
        uVar4 = uVar4 - 1;
        _Size = 1;
        iVar3 = iVar3 + -1 + (uint)bVar5;
      }
      else {
        if ((iVar3 <= iStack_18) && ((iVar3 < iStack_18 || (uVar4 < _Size)))) {
          _Size = uVar4;
          iStack_18 = iVar3;
        }
        memcpy(*(void **)param_1[8],param_2,_Size);
        bVar5 = uVar4 < _Size;
        uVar4 = uVar4 - _Size;
        iVar3 = (iVar3 - iStack_18) - (uint)bVar5;
        *(int *)param_1[0xc] = *(int *)param_1[0xc] - _Size;
        *(int *)param_1[8] = *(int *)param_1[8] + _Size;
      }
      param_2 = param_2 + _Size;
      if ((iVar3 < 1) && ((iVar3 < 0 || (uVar4 == 0)))) break;
    } while( true );
  }
  return CONCAT44((param_4 - iVar3) - (uint)(param_3 < uVar4),param_3 - uVar4);
}



undefined8 __thiscall FUN_00469270(int *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint _Size;
  uint uVar4;
  bool bVar5;
  int iStack_18;
  
  iVar3 = param_4;
  uVar4 = param_3;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    do {
      if (*(void **)param_1[7] == (void *)0x0) {
        _Size = 0;
      }
      else {
        _Size = *(uint *)param_1[0xb];
      }
      iStack_18 = (int)_Size >> 0x1f;
      if ((iStack_18 < 0) || ((-1 < (int)_Size || iStack_18 < 0 && (_Size == 0)))) {
        pcVar1 = *(code **)(*param_1 + 0x1c);
        _guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == -1) break;
        bVar5 = uVar4 != 0;
        uVar4 = uVar4 - 1;
        _Size = 1;
        iVar3 = iVar3 + -1 + (uint)bVar5;
        *param_2 = (char)iVar2;
      }
      else {
        if ((iVar3 <= iStack_18) && ((iVar3 < iStack_18 || (uVar4 < _Size)))) {
          _Size = uVar4;
          iStack_18 = iVar3;
        }
        memcpy(param_2,*(void **)param_1[7],_Size);
        bVar5 = uVar4 < _Size;
        uVar4 = uVar4 - _Size;
        iVar3 = (iVar3 - iStack_18) - (uint)bVar5;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - _Size;
        *(int *)param_1[7] = *(int *)param_1[7] + _Size;
      }
      param_2 = param_2 + _Size;
      if ((iVar3 < 1) && ((iVar3 < 0 || (uVar4 == 0)))) break;
    } while( true );
  }
  return CONCAT44((param_4 - iVar3) - (uint)(param_3 < uVar4),param_3 - uVar4);
}



uint __fastcall FUN_00469360(int *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x18);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  *(int *)param_1[0xb] = *(int *)param_1[0xb] + -1;
  pbVar2 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar2 + 1;
  return (uint)*pbVar2;
}



undefined4 FUN_004693a0(void)

{
  return 0xffffffff;
}



undefined8 FUN_004693b0(void)

{
  return 0;
}



undefined4 FUN_004693c0(void)

{
  return 0xffffffff;
}



void __fastcall FUN_00469ba0(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    func_0x0046b1f0(param_1,*param_1,param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined4 * __thiscall FUN_00469c30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_1;
}



undefined4 * __fastcall FUN_00469e50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}



void __fastcall FUN_00469e70(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eaccd0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((*(char *)(param_1 + 5) == '\0') && (*(undefined4 **)(param_1 + 1) != (undefined4 *)0x0)) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 1);
    _guard_check_icall(1,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// Library Function - Single Match
//  public: virtual void * __thiscall std::basic_stringbuf<char,struct std::char_traits<char>,class
// std::allocator<char> >::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2019 Release

undefined4 __thiscall
___G__basic_stringbuf_DU__char_traits_D_std__V__allocator_D_2__std__UAEPAXI_Z
          (undefined4 param_1,byte param_2)

{
  func_0x00469040();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 __thiscall FUN_0046a040(undefined4 param_1,byte param_2)

{
  func_0x004693d0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0046a100(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::ios_base::vftable;
  func_0x00e706cb(param_1,uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0046a170(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if ((*(char *)(param_1 + 6) == '\0') && (*(undefined4 **)(param_1 + 2) != (undefined4 *)0x0)) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 2);
    _guard_check_icall(1,uVar2);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined * Catch_0046af31(void)

{
  func_0x0046a610(4,1);
  return &DAT_0046af4a;
}



undefined1 * Catch_0046b05c(void)

{
  return &LAB_0046b043;
}



undefined * Catch_0046b842(void)

{
  func_0x0046a610(4,1);
  return &DAT_0046b85b;
}



undefined4 * __fastcall FUN_0046c0c0(undefined4 *param_1)

{
  *param_1 = boost::exception_detail::clone_base::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_0046c0d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead220;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception::vftable;
  piVar1 = *(int **)(param_2 + 4);
  param_1[1] = piVar1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0046c170(undefined4 *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ead27e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[7] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[8] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[8] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[8] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  *param_1 = boost::exception_detail::clone_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0046c220(undefined4 *param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead2c3;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  FUN_0046c2b0(param_2 + 4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FUN_0046c0d0(param_2 + 0x1c);
  param_1[1] = boost::wrapexcept<>::vftable;
  param_1[7] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0046c2b0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabbe5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::runtime_error::vftable;
  *param_1 = boost::system::system_error::vftable;
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 0xc);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0046c3f0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead35b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  uStack_8 = 0;
  *param_1 = stdext::exception::vftable;
  func_0x00469da0(param_2 + 0xc);
  uStack_8 = 2;
  *param_1 = stdext::cast_exception::vftable;
  func_0x00469da0(param_2 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0046c490(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ead27e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[7] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[8] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[8] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[8] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  iStack_8 = 0xffffffff;
  *param_1 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0046c580(int *param_1)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*param_1 + 8);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void __fastcall FUN_0046c5a0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x008ab812(*(int *)(param_1 + 0xc),1);
  }
  return;
}



void __fastcall FUN_0046c5e0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [52];
  
  FUN_0046c220(param_1);
  func_0x00e87d2e(auStack_38,&DAT_01288560);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0046c600(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead39c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x34,uVar1);
  uStack_8 = 0;
  uVar2 = FUN_0046c220(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_0046c770(int *param_1)

{
  code *pcVar1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)*param_1;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



undefined4 __thiscall FUN_0046c9b0(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined * Catch_0046cc3d(void)

{
  func_0x0046a610(4,1);
  return &DAT_0046cc56;
}



int __thiscall FUN_0046d040(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead568;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = param_1 + 4;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  if (param_2 != '\0') {
    iVar6 = func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



int __fastcall FUN_0046d0f0(int param_1)

{
  return param_1 + 4;
}



TypeDescriptor * FUN_0046d100(void)

{
  return &`protected:_virtual_void___thiscall_AnimatedText::onAppear(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0046d110(int param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int **ppiStack_54;
  int *piStack_50;
  undefined8 *puStack_4c;
  uint uStack_48;
  undefined8 uStack_38;
  int *piStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eac97d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_48 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  ppiVar3 = *(int ***)(param_1 + 4);
  piVar1 = *(int **)(param_1 + 8);
  uStack_8 = 0;
  ppiStack_2c = ppiVar3;
  piStack_28 = piVar1;
  uStack_14 = uStack_48;
  if (ppiVar3 != (int **)0x0) {
    pcVar4 = (code *)(*ppiVar3)[7];
    puStack_4c = (undefined8 *)0x467c3b;
    _guard_check_icall();
    puStack_4c = (undefined8 *)0x467c3f;
    cVar6 = (*pcVar4)();
    if (cVar6 == '\0') {
      pcVar4 = (code *)(*ppiVar3)[0xd];
      puStack_4c = (undefined8 *)0x467d36;
      _guard_check_icall();
      puStack_4c = (undefined8 *)0x467d3a;
      cVar6 = (*pcVar4)();
      if (cVar6 == '\0') {
        pcVar4 = (code *)(*ppiVar3)[0xe];
        puStack_4c = (undefined8 *)0x467df9;
        _guard_check_icall();
        puStack_4c = (undefined8 *)0x467dfd;
        cVar6 = (*pcVar4)();
        if (cVar6 == '\0') {
          pcVar4 = (code *)(*ppiVar3)[4];
          puStack_4c = (undefined8 *)0x467e69;
          _guard_check_icall();
          puStack_4c = (undefined8 *)0x467e6d;
          piVar7 = (int *)(*pcVar4)();
          if (*piVar7 != 0) {
            piStack_20 = (int *)&ppiStack_54;
            if (piVar1 != (int *)0x0) {
              LOCK();
              piVar1[1] = piVar1[1] + 1;
              UNLOCK();
            }
            uStack_8 = uStack_8 & 0xffffff00;
            ppiStack_54 = ppiVar3;
            piStack_50 = piVar1;
            FUN_005c66e0();
          }
        }
        else {
          puStack_4c = &uStack_1c;
          uStack_1c = 0;
          piStack_50 = (int *)0x467e14;
          func_0x0046b930();
          uStack_8._0_1_ = 3;
          if (DAT_0145d3a4 != DAT_0145d3a8) {
            piStack_50 = DAT_0145d3a4;
            do {
              if (*piStack_50 == (int)uStack_1c) break;
              piStack_50 = piStack_50 + 2;
            } while (piStack_50 != DAT_0145d3a8);
            if (piStack_50 != DAT_0145d3a8) {
              ppiStack_54 = &piStack_20;
              func_0x005793c0();
            }
          }
          uStack_8 = (uint)uStack_8._1_3_ << 8;
          piStack_50 = (int *)0x467e5a;
          FUN_00468340();
        }
      }
      else {
        puStack_4c = &uStack_1c;
        uStack_1c = 0;
        piStack_50 = (int *)0x467d55;
        func_0x0046b930();
        uStack_8._0_1_ = 2;
        if (DAT_0145d398 != DAT_0145d39c) {
          piStack_50 = DAT_0145d398;
          do {
            if (*piStack_50 == (int)uStack_1c) break;
            piStack_50 = piStack_50 + 2;
          } while (piStack_50 != DAT_0145d39c);
          if (piStack_50 != DAT_0145d39c) {
            ppiStack_54 = (int **)0x467d88;
            func_0x0057a5b0();
            piStack_20 = (int *)DAT_0145d39c[-1];
            if (piStack_20 != (int *)0x0) {
              LOCK();
              iVar5 = piStack_20[1] + -1;
              piStack_20[1] = iVar5;
              UNLOCK();
              if (iVar5 == 0) {
                pcVar4 = *(code **)*piStack_20;
                piStack_50 = (int *)0x467db0;
                _guard_check_icall();
                piStack_50 = (int *)0x467db5;
                (*pcVar4)();
                LOCK();
                iVar5 = piStack_20[2] + -1;
                piStack_20[2] = iVar5;
                UNLOCK();
                if (iVar5 == 0) {
                  pcVar4 = *(code **)(*piStack_20 + 4);
                  piStack_50 = (int *)0x467dcf;
                  _guard_check_icall();
                  piStack_50 = (int *)0x467dd4;
                  (*pcVar4)();
                }
              }
            }
            DAT_0145d39c = DAT_0145d39c + -2;
          }
        }
        uStack_8 = (uint)uStack_8._1_3_ << 8;
        piStack_50 = (int *)0x467de7;
        FUN_00468340();
      }
    }
    else {
      puStack_4c = &uStack_1c;
      uStack_1c = 0;
      piStack_50 = (int *)0x467c5a;
      func_0x0046b930();
      uStack_8._0_1_ = 1;
      uStack_38 = *(undefined8 *)((int)uStack_1c + 0x10);
      piStack_30 = *(int **)((int)uStack_1c + 0x18);
      piVar7 = (int *)((short)piStack_30 * 0xc);
      piStack_50 = (int *)piVar7[0x5174b6];
      piStack_20 = piVar7;
      if ((int *)piVar7[0x5174b6] == (int *)piVar7[0x5174b7]) {
LAB_00467d18:
        uStack_8 = (uint)uStack_8._1_3_ << 8;
        piStack_50 = (int *)0x467d24;
        FUN_00468340();
      }
      else {
        do {
          piVar2 = piStack_50 + 2;
          if (*piStack_50 == (int)uStack_1c) {
            ppiStack_54 = (int **)0x467cc1;
            func_0x0057a5b0();
            piStack_24 = *(int **)(piVar7[0x5174b7] + -4);
            if (piStack_24 != (int *)0x0) {
              LOCK();
              iVar5 = piStack_24[1] + -1;
              piStack_24[1] = iVar5;
              UNLOCK();
              if (iVar5 == 0) {
                pcVar4 = *(code **)*piStack_24;
                piStack_50 = (int *)0x467cea;
                _guard_check_icall();
                piStack_50 = (int *)0x467cef;
                (*pcVar4)();
                LOCK();
                iVar5 = piStack_24[2] + -1;
                piStack_24[2] = iVar5;
                UNLOCK();
                piVar7 = piStack_20;
                if (iVar5 == 0) {
                  pcVar4 = *(code **)(*piStack_24 + 4);
                  piStack_50 = (int *)0x467d09;
                  _guard_check_icall();
                  piStack_50 = (int *)0x467d0e;
                  (*pcVar4)();
                  piVar7 = piStack_20;
                }
              }
            }
            piVar7[0x5174b7] = piVar7[0x5174b7] + -8;
            goto LAB_00467d18;
          }
          piStack_50 = piVar2;
        } while (piVar2 != (int *)piVar7[0x5174b7]);
        uStack_8 = (uint)uStack_8._1_3_ << 8;
        piStack_50 = (int *)0x467cb0;
        FUN_00468340();
      }
    }
    pcVar4 = (code *)(*ppiVar3)[5];
    piStack_50 = (int *)0x467eaf;
    _guard_check_icall();
    piStack_50 = (int *)0x467eb3;
    piStack_50 = (int *)(*pcVar4)();
    piStack_30 = ppiVar3[6];
    uStack_38 = *(undefined8 *)(ppiVar3 + 4);
    ppiStack_54 = (int **)&uStack_38;
    func_0x00570d80();
  }
  uStack_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar5 = piVar1[1] + -1;
    piVar1[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar1;
      puStack_4c = (undefined8 *)0x467ef5;
      _guard_check_icall();
      puStack_4c = (undefined8 *)0x467ef9;
      (*pcVar4)();
      LOCK();
      piVar7 = piVar1 + 2;
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar1 + 4);
        puStack_4c = (undefined8 *)0x467f0e;
        _guard_check_icall();
        puStack_4c = (undefined8 *)0x467f12;
        (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0046d120(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0046d1a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



int * __thiscall FUN_0046d970(int param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)(param_1 - *(int *)(param_1 + -4));
  puStack_c = &DAT_00eacd2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + -2;
  *(undefined ***)(*(int *)(puVar3[-2] + 4) + -8 + (int)puVar3) = std::basic_ostream<>::vftable;
  *(int *)(*(int *)(*piVar1 + 4) + -0xc + (int)puVar3) = *(int *)(*piVar1 + 4) + -8;
  *puVar3 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar3 = std::ios_base::vftable;
  func_0x00e706cb(puVar3,uVar2);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(piVar1,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar1;
}



int __thiscall FUN_0046d980(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x68;
  func_0x004673c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0xb0);
  }
  return iVar1;
}



undefined4 * __thiscall FUN_0046d990(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -7;
  puStack_c = &DAT_00ead27e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[1] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[1] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[-6] = std::exception::vftable;
  __std_exception_destroy(param_1 + -5);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



undefined4 * __thiscall FUN_0046d9a0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -1;
  puStack_c = &DAT_00ead27e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[6] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[7] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[7] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[7] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



int * __thiscall FUN_0046d9b0(int param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)(param_1 - *(int *)(param_1 + -4));
  puStack_c = &DAT_00eacd2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + -6;
  *(undefined ***)(*(int *)(puVar3[-6] + 4) + -0x18 + (int)puVar3) = std::basic_istream<>::vftable;
  *(int *)(*(int *)(*piVar1 + 4) + -0x1c + (int)puVar3) = *(int *)(*piVar1 + 4) + -0x18;
  *puVar3 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar3 = std::ios_base::vftable;
  func_0x00e706cb(puVar3,uVar2);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(piVar1,0x60);
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar1;
}



undefined4 * __thiscall FUN_0046d9c0(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)(param_1 - *(int *)(param_1 + -4));
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaccfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004689e0(uVar1);
  *puVar2 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar2 = std::ios_base::vftable;
  func_0x00e706cb(puVar2);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2 + -8,0x68);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2 + -8;
}



undefined8 __fastcall FUN_0046d9d0(int param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



void __fastcall FUN_0046e4d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    func_0x0046e710(iVar1,*(int *)(param_1 + 0x14) - iVar1 >> 3);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



undefined4 * __thiscall FUN_0046e500(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined1 __fastcall FUN_0046e790(int param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



void __thiscall FUN_0046e7a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  *unaff_FS_OFFSET = iVar2;
  return;
}



undefined * Catch_0046e91d(void)

{
  return &DAT_0046e923;
}



void __thiscall FUN_0046f020(int param_1,undefined4 *param_2,byte param_3)

{
  param_2[1] = *(ushort *)(param_1 + 0x10) | 0x40;
  *param_2 = 0xffff;
  *(ushort *)(param_2 + 2) = (ushort)param_3;
  return;
}



int __thiscall FUN_0046f210(int param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eadabe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  func_0x00470060(uVar6);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = 0;
  func_0x008ab812(uVar2,8);
  iStack_8._0_1_ = 1;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      iVar5 = piVar3[2] + -1;
      piVar3[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __fastcall FUN_0046f300(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



void __thiscall FUN_0046f310(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  if ((param_3 < 0) || (*(int *)(param_1 + 0x54) <= param_3)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x50) + param_3;
    puVar2 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x48) + (uVar4 >> 1 & *(int *)(param_1 + 0x4c) - 1U) * 4)
             + (uVar4 & 1) * 8);
    *param_2 = 0;
    param_2[1] = 0;
    if (puVar2[1] != 0) {
      LOCK();
      piVar1 = (int *)(puVar2[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
  }
  *unaff_FS_OFFSET = iVar3;
  return;
}



int __cdecl
_vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x71b60  96  _vsnprintf_l
  puVar1 = (uint *)func_0x00462fc0(_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
                    // 0x71ba0  93  _vsnprintf
  iVar1 = _vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  
                    // 0x71bc0  34  _snprintf
  iVar1 = _vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}



float10 FUN_00471c60(int *param_1,int *param_2)

{
  double dVar1;
  float fStack_8;
  
  if ((*param_2 == *param_1) && (param_2[1] - param_1[1] == 0)) {
    return (float10)-1.0;
  }
  dVar1 = (double)-(param_2[1] - param_1[1]);
  func_0x00eaab48();
  fStack_8 = (float)dVar1;
  if (fStack_8 < 0.0) {
    fStack_8 = fStack_8 + 6.2831855;
  }
  return (float10)fStack_8;
}



undefined4 FUN_00471cd0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  double dVar2;
  float fVar3;
  
  if ((*param_2 != *param_1) || (param_2[1] - param_1[1] != 0)) {
    dVar2 = (double)-(param_2[1] - param_1[1]);
    func_0x00eaab48();
    fVar3 = (float)dVar2;
    if (fVar3 < 0.0) {
      fVar3 = fVar3 + 6.2831855;
    }
    fVar3 = fVar3 * 57.29578;
    if ((fVar3 < 337.5) && (22.5 <= fVar3)) {
      if (fVar3 < 67.5) {
        return 4;
      }
      if (fVar3 < 112.5) {
        return 0;
      }
      if (fVar3 < 157.5) {
        return 7;
      }
      if (fVar3 < 202.5) {
        return 3;
      }
      if (fVar3 < 247.5) {
        return 6;
      }
      if (fVar3 < 292.5) {
        return 2;
      }
      uVar1 = 8;
      if (fVar3 < 337.5) {
        uVar1 = 5;
      }
      return uVar1;
    }
  }
  return 1;
}



void __thiscall FUN_00471f00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = uVar1;
  return;
}



int __thiscall FUN_00471f30(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eadfa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar4);
      (*pcVar2)();
      LOCK();
      iVar3 = piVar1[2] + -1;
      piVar1[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00472120(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eae018;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar4);
      (*pcVar2)();
      LOCK();
      iVar3 = piVar1[2] + -1;
      piVar1[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00472240(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eae018;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar4);
      (*pcVar2)();
      LOCK();
      iVar3 = piVar1[2] + -1;
      piVar1[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_004722e0(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eae063;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00618eb0(uVar4);
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar3 = piVar1[2] + -1;
      piVar1[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00472390(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



undefined4 __fastcall FUN_00472790(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



undefined4 __fastcall FUN_004727a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



undefined4 __fastcall FUN_004727b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



undefined4 __thiscall FUN_004727c0(undefined3 param_1,undefined4 param_2)

{
  func_0x0047a540(param_2,&stack0xfffffffb,CONCAT13(0x15,param_1));
  return param_2;
}



undefined4 __fastcall FUN_004727e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  return *(undefined4 *)(iVar2 + 0x50);
}



int __fastcall FUN_00472800(int param_1)

{
  return param_1 + 0x34;
}



undefined1 __fastcall FUN_00472810(int param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



void __thiscall FUN_00472820(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



undefined1 __fastcall FUN_00472830(int param_1)

{
  if ((*(char *)(param_1 + 0x58) == '\x02') && (*(int *)(param_1 + 0x60) == 0xd)) {
    return 1;
  }
  return 0;
}



undefined1 __fastcall FUN_00472850(int *param_1)

{
  code *pcVar1;
  char cVar2;
  
  if (((char)param_1[0x16] == '\x02') && (param_1[0x18] == 0xd)) {
    pcVar1 = *(code **)(*param_1 + 0x2c);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



void __thiscall FUN_00472880(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



undefined1 __fastcall FUN_004728a0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2d8);
}



float10 __fastcall FUN_004729d0(int param_1)

{
  return (float10)*(double *)(param_1 + 0x520);
}



float10 __fastcall FUN_004729e0(int param_1)

{
  double *pdVar1;
  
  pdVar1 = (double *)(param_1 + 0x520);
  if (*pdVar1 <= *(double *)(param_1 + 0x528) && *(double *)(param_1 + 0x528) != *pdVar1) {
    pdVar1 = (double *)(param_1 + 0x528);
  }
  return (float10)*pdVar1;
}



undefined4 __thiscall FUN_00472a00(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac107;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  func_0x00469da0(param_1 + 0x74,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00472a80(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = param_2[1];
  *(undefined4 *)(param_1 + 0x6c) = param_2[2];
  *(undefined4 *)(param_1 + 0x70) = param_2[3];
  return;
}



undefined4 __fastcall FUN_00472ab0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}



undefined4 __fastcall FUN_00472ac0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



void __thiscall FUN_00472ad0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *unaff_FS_OFFSET = iVar2;
  return;
}



undefined4 __fastcall FUN_00472c40(int param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



undefined4 __fastcall FUN_00472c50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



undefined4 __thiscall FUN_004733f0(undefined4 param_1,byte param_2)

{
  func_0x00473420();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2f8);
  }
  return param_1;
}



void __thiscall FUN_004738c0(int *param_1,int *param_2,char param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  int *piVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int *unaff_ESI;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_28;
  int aiStack_24 [6];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_6c;
  iStack_38 = param_4;
  piStack_64 = param_1;
  if (((char)param_1[0x16] == '\x02') && (param_1[0x18] == 0xd)) {
    pcVar1 = *(code **)(*param_1 + 0x2c);
    _guard_check_icall();
    cVar5 = (*pcVar1)();
    if (cVar5 == '\0') goto LAB_00473e61;
  }
  piStack_68 = (int *)(int)(float)param_1[0xa9];
  iStack_40 = DAT_0145d7e0;
  iStack_60 = (int)(float)param_1[0xa8];
  iVar10 = *param_2 - iStack_60;
  iVar9 = param_1[0x97];
  iStack_44 = (param_1[0x98] - (int)piStack_68) + param_2[1];
  pcVar1 = *(code **)(*param_1 + 0x44);
  _guard_check_icall(&iStack_58);
  piVar7 = (int *)(*pcVar1)();
  iStack_40 = ((iVar10 + iVar9) - *piVar7) + iStack_44 / 2;
  iStack_48 = (iStack_48 - piVar7[1]) + iStack_44 / 2;
  if ((char)param_1[0x90] == '\0') {
    iVar9 = param_1[0x14];
  }
  else {
    iVar9 = param_1[0x15];
  }
  iStack_28 = iStack_40;
  aiStack_24[0] = iStack_48;
  func_0x00479a40(&iStack_28,iVar9);
  if (param_3 == '\0') {
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    iVar9 = param_1[0x97];
    iVar10 = param_1[0x98];
  }
  iStack_5c = iVar10;
  iStack_54 = iVar9;
  if (((char)param_1[0x49] != '\0') && (param_3 != '\0')) {
    piStack_64 = DAT_0145ec98;
    piStack_68 = (int *)((float)DAT_0145d7e0 * 0.03125);
    iStack_58 = (int)((float)iStack_4c - (float)piStack_68 * 4.0);
    iVar2 = param_2[1];
    iVar11 = *param_2 - (int)uStack_6c;
    pcVar1 = *(code **)(*unaff_EBX + 0x44);
    _guard_check_icall(&iStack_28);
    piVar7 = (int *)(*pcVar1)();
    iVar9 = iStack_58;
    iVar10 = iStack_60;
    iStack_44 = (iStack_58 - *piVar7) + iVar11 + (int)((float)DAT_0145d7e0 * 0.0625);
    iStack_40 = ((iVar2 - (int)unaff_ESI) - piVar7[1]) + (int)((float)DAT_0145d7e0 * 0.0625) +
                iStack_60;
    iStack_3c = iStack_5c + -1 + iStack_44;
    iStack_38 = iStack_5c + -1 + iStack_40;
    func_0x00472610(&iStack_44,(int)(uStack_6c + uStack_6c),unaff_ESI + 0x3d);
    param_1 = unaff_ESI;
  }
  if ((*(char *)((int)param_1 + 0x125) != '\0') && (param_3 != '\0')) {
    piStack_68 = DAT_0145ec98;
    piStack_64 = (int *)(float)DAT_0145d7e0;
    iVar2 = param_2[1];
    iVar11 = *param_2 - (int)uStack_6c;
    pcVar1 = *(code **)(*unaff_EBX + 0x44);
    _guard_check_icall(&iStack_28);
    piVar7 = (int *)(*pcVar1)();
    iVar9 = iStack_58;
    iVar10 = iStack_60;
    iStack_44 = (iStack_58 - *piVar7) + iVar11;
    iStack_3c = iStack_50 + -1 + iStack_44;
    iStack_40 = ((iVar2 - (int)unaff_ESI) - piVar7[1]) + iStack_60;
    iStack_38 = iStack_50 + -1 + iStack_40;
    func_0x00472610(&iStack_44,(int)((float)piStack_68 * 0.0625),unaff_ESI + 0x41);
    param_1 = unaff_ESI;
  }
  if ((char)param_1[0x16] != '\x01') {
    pcVar1 = *(code **)(*param_1 + 0x44);
    _guard_check_icall(&iStack_28);
    piVar7 = (int *)(*pcVar1)();
    iVar9 = iStack_54 - *piVar7;
    iStack_5c = iVar10 - piVar7[1];
  }
  iVar10 = DAT_0145ec98[1];
  iVar2 = *DAT_0145ec98;
  piStack_64 = (int *)param_1[0x85];
  if ((char)param_1[0x90] == '\0') {
    iVar11 = param_1[0x14];
  }
  else {
    iVar11 = param_1[0x15];
  }
  piVar7 = (int *)((*param_2 - (int)uStack_6c) + iVar9);
  func_0x0058ad00(iVar11,piStack_64,1,iStack_44,0,piVar7,iStack_5c + (param_2[1] - (int)unaff_ESI));
  if (*(char *)((int)param_1 + 0x1e) != '\0') {
    uVar8 = func_0x005ba2e0(&iStack_5c);
    func_0x004726d0(iVar10 - iVar2 >> 2,uVar8);
  }
  if ((char)param_1[0x90] == '\0') {
    iVar9 = param_1[0x14];
  }
  else {
    iVar9 = param_1[0x15];
  }
  if ((iVar9 == 0) || (iVar9 == 3)) {
    puVar3 = (undefined4 *)param_1[0xb2];
    for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
      iVar9 = puVar4[2];
      iStack_44 = (int)piStack_64 - ((*(int *)(iVar9 + 0x48) - *(int *)(iVar9 + 0x40)) + 1) / 2;
      iStack_40 = (int)uStack_6c - ((*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + 1) / 2;
      iStack_3c = (*(int *)(iVar9 + 0x48) - *(int *)(puVar4[2] + 0x40)) + iStack_44;
      iStack_38 = (*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + iStack_40;
      FUN_00857930(&iStack_44);
      pcVar1 = *(code **)(*(int *)puVar4[2] + 4);
      _guard_check_icall(&iStack_44,1);
      (*pcVar1)();
      param_1 = piVar7;
    }
  }
  puVar3 = (undefined4 *)param_1[0xb4];
  for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
    iVar9 = puVar4[2];
    iStack_44 = (int)piStack_64 - ((*(int *)(iVar9 + 0x48) - *(int *)(iVar9 + 0x40)) + 1) / 2;
    iStack_40 = (int)uStack_6c - ((*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + 1) / 2;
    iStack_3c = (*(int *)(iVar9 + 0x48) - *(int *)(puVar4[2] + 0x40)) + iStack_44;
    iStack_38 = (*(int *)(iVar9 + 0x4c) - *(int *)(puVar4[2] + 0x44)) + iStack_40;
    FUN_00857930(&iStack_44);
    pcVar1 = *(code **)(*(int *)puVar4[2] + 4);
    _guard_check_icall(&iStack_44,1);
    (*pcVar1)();
    param_1 = piVar7;
  }
  uStack_6c._2_2_ = (undefined2)((uint)uStack_6c >> 0x10);
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x30);
  _guard_check_icall();
  cVar5 = (*pcVar1)();
  if (cVar5 != '\0') {
    bVar6 = uStack_6c._2_1_;
    if (uStack_6c._2_1_ < 2) {
      bVar6 = 2;
    }
    piStack_68 = (int *)CONCAT31(piStack_68._1_3_,bVar6);
    if ((uStack_6c._3_1_ == 0) || (0xd7 < uStack_6c._3_1_)) {
      iStack_60 = CONCAT31(iStack_60._1_3_,0xd7);
    }
  }
  if (iStack_38 != 0) {
    func_0x004aa6b0(aiStack_24,iStack_60,piStack_68);
  }
LAB_00473e61:
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00473e80(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 8) {
    param_3 = *(int *)(param_1 + 0x50);
  }
  iVar1 = DAT_0145ec98[1];
  iVar2 = *DAT_0145ec98;
  func_0x0058ad00(param_3,0,param_5,0,param_6,0,0);
  func_0x0061b100(param_2,iVar1 - iVar2 >> 2,param_7,*(undefined1 *)(param_1 + 0xa4));
  return;
}



uint __thiscall FUN_00474e30(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  _guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  if (*piVar2 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x10);
    _guard_check_icall();
    (*pcVar1)();
    uVar3 = FUN_005ca470(param_2);
    return uVar3;
  }
  return (uint)piVar2 & 0xffffff00;
}



void __thiscall FUN_00474e80(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x0046bc40("onTurn",6,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x00470f30(&uStack_28,&param_2);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00474f40(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((*param_3 != *param_2) || (param_3[1] != param_2[1])) ||
     ((short)param_3[2] != (short)param_2[2])) {
    iVar5 = FUN_00471cd0(param_2,param_3,uVar4);
    param_1[0x9b] = iVar5;
    param_1[0x9c] = *param_2;
    param_1[0x9d] = param_2[1];
    *(short *)(param_1 + 0x9e) = (short)param_2[2];
    param_1[0x9f] = *param_3;
    param_1[0xa0] = param_3[1];
    *(short *)(param_1 + 0xa1) = (short)param_3[2];
    param_1[0x14] = iVar5;
    param_1[0x15] = iVar5;
    *(undefined1 *)(param_1 + 0x90) = 1;
    iStack_1c = (int)DAT_0145db28;
    piStack_18 = (int *)((ulonglong)DAT_0145db28 >> 0x20);
    param_1[0x88] = iStack_1c;
    param_1[0x89] = (int)piStack_18;
    *(undefined1 *)(param_1 + 0x8a) = 0;
    piStack_18 = (int *)param_1[0x93];
    *(undefined1 *)(param_1 + 0x86) = 0;
    if (piStack_18 != (int *)0x0) {
      *(undefined1 *)(piStack_18 + 0x14) = 1;
      piVar2 = (int *)piStack_18[0x13];
      if (piVar2 != (int *)0x0) {
        pcVar3 = *(code **)(*piVar2 + 0x10);
        _guard_check_icall(CONCAT31((int3)((uint)*piVar2 >> 8),piVar2 != piStack_18 + 10));
        (*pcVar3)();
        piStack_18[0x13] = 0;
      }
      iStack_1c = 0;
      piStack_18 = (int *)0x0;
      uStack_8 = 0;
      func_0x0046ffa0(&iStack_1c);
      piVar2 = piStack_18;
      uStack_8 = 0xffffffff;
      if (piStack_18 != (int *)0x0) {
        LOCK();
        iVar5 = piStack_18[1] + -1;
        piStack_18[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar3 = *(code **)*piStack_18;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar1 = piVar2 + 2;
          iVar5 = *piVar1 + -1;
          *piVar1 = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar3 = *(code **)(*piVar2 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
    }
    pcVar3 = *(code **)(*param_1 + 0x90);
    _guard_check_icall();
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_004750e0(int *param_1)

{
  code *pcVar1;
  
  if ((char)param_1[0x90] != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x98);
    _guard_check_icall();
    (*pcVar1)();
  }
  return;
}



void __thiscall FUN_00475110(int param_1,int param_2,int param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((*(float *)(param_1 + 0x2a0) == 0.0) && (*(float *)(param_1 + 0x2a4) == 0.0)) {
    uStack_c = (undefined4)DAT_0145db28;
    uStack_8 = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
    *(undefined4 *)(param_1 + 0x2ac) = uStack_8;
    *(undefined4 *)(param_1 + 0x2a8) = uStack_c;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    *(float *)(param_1 + 0x298) = (float)param_2;
    *(float *)(param_1 + 0x29c) = (float)param_3;
    func_0x004751a0();
  }
  return;
}



void FUN_00475660(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  func_0x0046bc40("onPositionChange",0x10,uVar1);
  uStack_14 = 0;
  uVar1 = func_0x0047ac20(&uStack_38,param_1,param_2);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __fastcall FUN_00475740(int *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint auStack_34 [7];
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae6bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1[0x95];
  if (iVar1 != 0) {
    piStack_18 = (int *)(iVar1 + 0x28);
    *(undefined1 *)(iVar1 + 0x50) = 1;
    piStack_14 = *(int **)(iVar1 + 0x4c);
    if (piStack_14 != (int *)0x0) {
      pcVar2 = *(code **)(*piStack_14 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piStack_14 >> 8),piStack_14 != piStack_18),uVar3);
      (*pcVar2)();
      piStack_18[9] = 0;
    }
    auStack_34[6] = 0;
    piStack_18 = (int *)0x0;
    uStack_8 = 0;
    func_0x0046ffa0(auStack_34 + 6);
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar1 = piStack_18[1] + -1;
      piStack_18[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar1 = piStack_18[2] + -1;
        piStack_18[2] = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar2 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  if (*(char *)((int)param_1 + 0x126) != '\0') {
    pcVar2 = *(code **)(*param_1 + 0x74);
    _guard_check_icall();
    (*pcVar2)();
    *(undefined1 *)((int)param_1 + 0x126) = 0;
    auStack_34[4] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    auStack_34[5] = 0;
    func_0x0046bc40("onAppear",8);
    uStack_8 = 1;
    uVar3 = func_0x00470bf0(auStack_34);
    if (0 < (int)uVar3) {
      func_0x00d66d90(DAT_0145e9f0,~uVar3);
    }
    uStack_8 = 0xffffffff;
    if (0xf < auStack_34[5]) {
      func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
LAB_004759cf:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  piStack_14 = (int *)param_1[0xa2];
  iVar1 = param_1[4];
  if ((((int *)iVar1 == piStack_14) && (param_1[5] == param_1[0xa3])) &&
     ((short)param_1[6] == (short)param_1[0xa4])) {
LAB_004759f7:
    if ((param_1[5] == param_1[0xa3]) && ((short)param_1[6] == (short)param_1[0xa4]))
    goto LAB_00475b1c;
  }
  else {
    uVar3 = (int)piStack_14 - iVar1 >> 0x1f;
    if ((((int)(((int)piStack_14 - iVar1 ^ uVar3) - uVar3) < 2) &&
        (uVar3 = param_1[0xa3] - param_1[5] >> 0x1f,
        (int)((param_1[0xa3] - param_1[5] ^ uVar3) - uVar3) < 2)) &&
       ((uVar3 = (int)(short)param_1[0xa4] - (int)(short)param_1[6], uVar4 = (int)uVar3 >> 0x1f,
        uVar3 = uVar3 ^ uVar4, uVar3 == uVar4 || (int)(uVar3 - uVar4) < 0 &&
        (*(char *)((int)param_1 + 0x241) != '\0')))) {
      *(undefined1 *)((int)param_1 + 0x241) = 0;
      pcVar2 = *(code **)(*param_1 + 0x70);
      _guard_check_icall(param_1 + 0xa2,param_1 + 4);
      (*pcVar2)();
      auStack_34[4] = 0;
      auStack_34[5] = 0;
      auStack_34[0] = 0;
      auStack_34[1] = 0;
      auStack_34[2] = 0;
      auStack_34[3] = 0;
      func_0x0046bc40("onWalk",6);
      uStack_8 = 2;
      func_0x0047a5a0(auStack_34,param_1 + 0xa2,param_1 + 4);
      uStack_8 = 0xffffffff;
      if (0xf < auStack_34[5]) {
        func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
      }
      goto LAB_004759cf;
    }
    if ((int *)iVar1 == piStack_14) goto LAB_004759f7;
  }
  pcVar2 = *(code **)(*param_1 + 0x74);
  _guard_check_icall();
  (*pcVar2)();
  auStack_34[4] = 0;
  auStack_34[5] = 0;
  auStack_34[0] = 0;
  auStack_34[1] = 0;
  auStack_34[2] = 0;
  auStack_34[3] = 0;
  func_0x0046bc40("onDisappear",0xb);
  uStack_8 = 3;
  uVar3 = func_0x00470bf0(auStack_34);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_8 = 0xffffffff;
  if (0xf < auStack_34[5]) {
    func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
  }
  auStack_34[4] = 0;
  auStack_34[5] = 0xf;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  func_0x0046bc40("onAppear",8);
  uStack_8 = 4;
  uVar3 = func_0x00470bf0(&uStack_4c);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_38) {
    func_0x0046b1f0(&uStack_4c,uStack_4c,uStack_38);
  }
LAB_00475b1c:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_00475b30(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [4];
  int *piStack_70;
  undefined **ppuStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined ***pppuStack_48;
  uint auStack_44 [8];
  undefined ***pppuStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae740;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *(int *)(param_1 + 0x254);
  if (iVar2 != 0) {
    pppuStack_24 = (undefined ***)(iVar2 + 0x28);
    *(undefined1 *)(iVar2 + 0x50) = 1;
    piStack_20 = *(int **)(iVar2 + 0x4c);
    if (piStack_20 != (int *)0x0) {
      pcVar3 = *(code **)(*piStack_20 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piStack_20 >> 8),
                                  (undefined ***)piStack_20 != pppuStack_24),uStack_14);
      (*pcVar3)();
      pppuStack_24[9] = (undefined **)0x0;
    }
  }
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0x290) = *(undefined2 *)(param_1 + 0x18);
  uStack_1c = 0;
  func_0x0046b930(&uStack_1c);
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
    UNLOCK();
  }
  pppuStack_24 = &ppuStack_6c;
  piStack_20 = &uStack_68;
  ppuStack_6c = std::_Func_impl_no_alloc<>::vftable;
  uStack_68 = (undefined4)uStack_1c;
  iStack_64 = (int)uStack_1c._4_4_;
  auStack_44[6] = 0;
  auStack_44[7] = 0;
  uStack_8._1_3_ = 0;
  pppuStack_48 = &ppuStack_6c;
  uStack_8._0_1_ = 6;
  auStack_44[4] = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  auStack_44[5] = 0;
  func_0x0046bc40("Creature::onDisappear",0x15);
  uStack_8._0_1_ = 7;
  uVar5 = FUN_005e5070(auStack_74,auStack_44,&ppuStack_6c,0);
  uStack_8._0_1_ = 8;
  func_0x0046ffa0(uVar5);
  uStack_8._0_1_ = 7;
  if (piStack_70 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_70[1] + -1;
    piStack_70[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*piStack_70;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar2 = piStack_70[2] + -1;
      piStack_70[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piStack_70 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  uStack_8._0_1_ = 6;
  if (0xf < auStack_44[5]) {
    func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
  }
  auStack_44[4] = 0;
  auStack_44[5] = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (pppuStack_48 != (undefined ***)0x0) {
    pcVar3 = (code *)(*pppuStack_48)[4];
    _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_6c >> 8),pppuStack_48 != &ppuStack_6c));
    (*pcVar3)();
    pppuStack_48 = (undefined ***)0x0;
  }
  uStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar3 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1 + -1;
      *piVar1 = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00475f60(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onDeath",7,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x00470bf0(&uStack_28);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00476180(int param_1,byte param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  double dVar7;
  undefined **ppuStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined ***pppuStack_50;
  uint auStack_4c [6];
  undefined ***pppuStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae848;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puStack_28 = (undefined4 *)func_0x00476020(uStack_14);
    puVar6 = (undefined4 *)((int)puStack_28 - 1);
    puStack_30 = puVar6;
    uVar3 = FUN_00478c20(1,8);
    if (0 < (int)puVar6) {
      puVar1 = puVar6;
      if ((DAT_0145d0cc & 0x20) != 0) {
        puVar1 = (undefined4 *)((int)puVar6 * 2);
      }
      uStack_1c = CONCAT44(puVar1,(undefined4)uStack_1c);
      uVar3 = FUN_00478c20(1,8);
      uVar3 = (uint)((longlong)(ulonglong)((uVar3 & 0xffff) + 0x14) / (longlong)(int)uStack_1c._4_4_
                    );
    }
    uVar3 = uVar3 & 0xffff;
    if ((DAT_0145d0cc & 0x20) == 0) {
      uVar3 = uVar3 + 10;
    }
    if ((ushort)uVar3 < 0x14) {
      uVar3 = 0x14;
    }
    if (*(uint *)(param_1 + 0x78) != 0) {
      puVar1 = *(undefined4 **)
                (*(int *)((&DAT_0145d8a0)[(uint)*(byte *)(param_1 + 0x58) * 3] +
                         (*(uint *)(param_1 + 0x78) & 0xffff) * 8) + 0x50);
      puVar6 = puStack_28;
      if ((int)((int)puVar1 - 1U) < (int)puStack_30) {
        puVar6 = puVar1;
      }
      puVar6 = (undefined4 *)((int)puVar6 - 1);
    }
    uStack_1c = (ulonglong)CONCAT14(param_2,(undefined4)uStack_1c);
    uVar2 = uStack_1c;
    if (puVar6 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x214) = 0;
      uVar3 = (uint)param_2;
    }
    else {
      uStack_24 = DAT_0145db28;
      dVar7 = uStack_24;
      puStack_30 = (undefined4 *)(uVar3 & 0xffff);
      pppuStack_34 = (undefined ***)0x0;
      iVar5 = *(int *)(param_1 + 0x234) + (uint)CARRY4((uint)puStack_30,*(uint *)(param_1 + 0x230));
      uStack_24._4_4_ = (int)((ulonglong)DAT_0145db28 >> 0x20);
      uStack_1c._4_4_ = (uint)param_2;
      puStack_28 = puStack_30;
      if ((uStack_24._4_4_ < iVar5) ||
         (((uStack_24._4_4_ <= iVar5 &&
           (uStack_24._0_4_ = SUB84(DAT_0145db28,0),
           (uint)uStack_24 < (int)puStack_30 + *(uint *)(param_1 + 0x230))) ||
          ((int)DAT_0145d7e0 <= (int)uStack_1c._4_4_)))) {
        uStack_24 = dVar7;
        if ((*(int *)(param_1 + 0x214) == 0) && ((int)uStack_1c._4_4_ < (int)DAT_0145d7e0)) {
          *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x21c) % (uint)puVar6 + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + 1;
        *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x21c) % (uint)puVar6 + 1;
        uStack_24 = DAT_0145db28;
        uVar3 = *(uint *)(param_1 + 0x230);
        dVar7 = DAT_0145db28;
        uStack_1c = uVar2;
        func_0x008abf00();
        uVar2 = uStack_1c;
        if (dVar7 <= (double)(int)puStack_30 * 1.5) {
          *(uint *)(param_1 + 0x230) = (int)puStack_28 + uVar3;
          *(uint *)(param_1 + 0x234) =
               (int)pppuStack_34 + (uint)CARRY4((uint)puStack_28,uVar3) + *(int *)(param_1 + 0x234);
        }
        else {
          uStack_24 = DAT_0145db28;
          dVar7 = uStack_24;
          uStack_24._0_4_ = SUB84(DAT_0145db28,0);
          uStack_24._4_4_ = (int)((ulonglong)DAT_0145db28 >> 0x20);
          *(uint *)(param_1 + 0x230) = (uint)uStack_24;
          *(int *)(param_1 + 0x234) = uStack_24._4_4_;
          uStack_24 = dVar7;
        }
      }
      uStack_1c = uVar2;
      uVar3 = uStack_1c._4_4_;
    }
    if ((uVar3 == DAT_0145d7e0) && (*(int *)(param_1 + 0x24c) == 0)) {
      uStack_1c = 0;
      func_0x0046b930(&uStack_1c);
      if (uStack_1c._4_4_ != 0) {
        LOCK();
        *(int *)(uStack_1c._4_4_ + 4) = *(int *)(uStack_1c._4_4_ + 4) + 1;
        UNLOCK();
      }
      pppuStack_34 = &ppuStack_74;
      puStack_30 = &uStack_70;
      ppuStack_74 = std::_Func_impl_no_alloc<>::vftable;
      uStack_70 = (undefined4)uStack_1c;
      iStack_6c = uStack_1c._4_4_;
      uStack_2c = 0;
      puStack_28 = (undefined4 *)0x0;
      uStack_8._1_3_ = 0;
      pppuStack_50 = &ppuStack_74;
      uStack_8._0_1_ = 6;
      auStack_4c[4] = 0;
      auStack_4c[0] = 0;
      auStack_4c[1] = 0;
      auStack_4c[2] = 0;
      auStack_4c[3] = 0;
      auStack_4c[5] = 0;
      func_0x0046bc40("Creature::updateWalkAnimation",0x1d);
      uStack_8._0_1_ = 7;
      uVar4 = FUN_005e4dd0(&uStack_24,auStack_4c,&ppuStack_74,0x32);
      uStack_8._0_1_ = 8;
      func_0x0046ffa0(uVar4);
      uStack_8._0_1_ = 7;
      FUN_00468340();
      uStack_8._0_1_ = 6;
      if (0xf < auStack_4c[5]) {
        func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
      }
      auStack_4c[4] = 0;
      auStack_4c[5] = 0xf;
      auStack_4c[0] = auStack_4c[0] & 0xffffff00;
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      func_0x00464b40();
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004764e0(int param_1,byte param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((uint)param_3 * 8 + 0x25c + param_1);
  *piVar2 = 0;
  piVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  if (((iVar1 == 0) || (iVar1 == 4)) || (iVar1 == 7)) {
    piVar2[1] = DAT_0145d7e0 - (uint)param_2;
  }
  else if (((iVar1 == 2) || (iVar1 == 5)) || (iVar1 == 6)) {
    piVar2[1] = (uint)param_2 - DAT_0145d7e0;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 5)) {
    *piVar2 = (uint)param_2 - DAT_0145d7e0;
  }
  else if (((iVar1 == 3) || (iVar1 == 7)) || (iVar1 == 6)) {
    *piVar2 = DAT_0145d7e0 - (uint)param_2;
    return;
  }
  return;
}



void __fastcall FUN_00476980(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [4];
  int *piStack_78;
  undefined4 *puStack_74;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined ***pppuStack_4c;
  uint auStack_48 [6];
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined ***pppuStack_24;
  undefined ***pppuStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae920;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_30 = param_1 + 0x91;
  iVar6 = *piStack_30;
  if (iVar6 != 0) {
    pppuStack_24 = (undefined ***)(iVar6 + 0x28);
    *(undefined1 *)(iVar6 + 0x50) = 1;
    pppuStack_20 = *(undefined ****)(iVar6 + 0x4c);
    if (pppuStack_20 != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_20)[4];
      _guard_check_icall(CONCAT31((int3)((uint)*pppuStack_20 >> 8),pppuStack_20 != pppuStack_24),
                         uStack_14);
      (*pcVar2)();
      pppuStack_24[9] = (undefined **)0x0;
    }
  }
  pcVar2 = *(code **)(*param_1 + 0x94);
  _guard_check_icall();
  (*pcVar2)();
  if ((char)param_1[0x90] != '\0') {
    uStack_1c = 0;
    func_0x0046b930(&uStack_1c);
    iVar8 = DAT_0145dc9c;
    iVar6 = DAT_0145d7e0;
    uStack_8 = 0;
    if ((DAT_0145d0cc & 0x1000000) == 0) {
      uVar4 = FUN_00478c20(0,8);
      pppuStack_20 = (undefined ***)((float)uVar4 / (float)iVar6);
    }
    else {
      uVar5 = FUN_00478c20(1,8);
      if (iVar8 < 1) {
        iVar8 = 1;
      }
      iVar6 = (int)((longlong)(ulonglong)(uVar5 & 0xffff) / (longlong)iVar8);
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      pppuStack_20 = (undefined ***)(float)iVar6;
    }
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    pppuStack_24 = &ppuStack_70;
    puStack_74 = &uStack_6c;
    ppuStack_70 = std::_Func_impl_no_alloc<>::vftable;
    uStack_6c = (undefined4)uStack_1c;
    iStack_68 = (int)uStack_1c._4_4_;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
    pppuStack_4c = &ppuStack_70;
    uStack_8._0_1_ = 6;
    auStack_48[4] = 0;
    auStack_48[0] = 0;
    auStack_48[1] = 0;
    auStack_48[2] = 0;
    auStack_48[3] = 0;
    auStack_48[5] = 0;
    func_0x0046bc40("Creature::nextWalkUpdate",0x18);
    uStack_8._0_1_ = 7;
    uVar7 = FUN_005e4dd0(auStack_7c,auStack_48,&ppuStack_70,(int)(float)pppuStack_20);
    uStack_8._0_1_ = 8;
    func_0x0046ffa0(uVar7);
    uStack_8._0_1_ = 7;
    if (piStack_78 != (int *)0x0) {
      LOCK();
      iVar6 = piStack_78[1] + -1;
      piStack_78[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*piStack_78;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar6 = piStack_78[2] + -1;
        piStack_78[2] = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piStack_78 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_8._0_1_ = 6;
    if (0xf < auStack_48[5]) {
      func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
    }
    auStack_48[4] = 0;
    auStack_48[5] = 0xf;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    if (pppuStack_4c != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_4c)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_70 >> 8),pppuStack_4c != &ppuStack_70));
      (*pcVar2)();
      pppuStack_4c = (undefined ***)0x0;
    }
    uStack_8 = 0xffffffff;
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar3 + 2;
        iVar6 = *piVar1 + -1;
        *piVar1 = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00476c60(int *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte unaff_SI;
  float fVar11;
  float fVar12;
  undefined8 uStack_10;
  
  iVar8 = DAT_0145d7e0;
  uVar7 = DAT_0145d0cc & 0x1000000;
  uVar5 = FUN_00478c20(1,8);
  iVar3 = DAT_0145d7e0;
  bVar10 = (byte)DAT_0145d7e0;
  iVar6 = 10;
  if (uVar7 != 0) {
    iVar6 = 0;
  }
  uVar2 = CONCAT44(DAT_0145db28._4_4_,(uint)DAT_0145db28);
  fVar11 = 1.0 / ((float)((uVar5 & 0xffff) + iVar6) / (float)iVar8);
  fVar12 = fVar11;
  func_0x008abfd0();
  iVar8 = (int)(fVar12 * fVar11);
  if (bVar10 < (byte)iVar8) {
    iVar8 = iVar3;
  }
  bVar9 = (byte)iVar8;
  uStack_10 = CONCAT71((int7)((ulonglong)uVar2 >> 8),bVar9);
  func_0x008abfd0();
  bVar10 = *(byte *)(param_1 + 0x86);
  if (*(byte *)(param_1 + 0x86) < bVar9) {
    bVar10 = bVar9;
  }
  *(byte *)(param_1 + 0x86) = bVar10;
  pcVar1 = *(code **)(*param_1 + 0x88);
  _guard_check_icall((undefined4)uStack_10);
  (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x8c);
  _guard_check_icall((char)param_1[0x86],0);
  (*pcVar1)();
  if (bVar10 < unaff_SI) {
    bVar10 = unaff_SI;
  }
  pcVar1 = *(code **)(*param_1 + 0x8c);
  _guard_check_icall(bVar10,1);
  (*pcVar1)();
  func_0x00476590();
  pcVar1 = *(code **)(*param_1 + 0x30);
  _guard_check_icall();
  cVar4 = (*pcVar1)();
  if ((cVar4 == '\0') && ((char)param_1[0x90] != '\0')) {
    uVar7 = (uint)DAT_0145db28 - param_1[0x88];
    iVar8 = (DAT_0145db28._4_4_ - param_1[0x89]) - (uint)((uint)DAT_0145db28 < (uint)param_1[0x88]);
    uVar5 = FUN_00478c20(0,8);
    if ((-1 < iVar8) && ((0 < iVar8 || ((uVar5 & 0xffff) <= uVar7)))) {
      pcVar1 = *(code **)(*param_1 + 0x98);
      _guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}



void __fastcall FUN_00476eb0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [4];
  int *piStack_78;
  undefined **ppuStack_74;
  int iStack_70;
  int iStack_6c;
  undefined ***pppuStack_50;
  uint auStack_4c [8];
  undefined ***pppuStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae9c8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_2c = (undefined ***)(param_1 + 0x244);
  iVar2 = (int)*pppuStack_2c;
  auStack_4c[7] = param_1;
  if (iVar2 != 0) {
    piStack_24 = (int *)(iVar2 + 0x28);
    *(undefined1 *)(iVar2 + 0x50) = 1;
    piStack_20 = *(int **)(iVar2 + 0x4c);
    if (piStack_20 != (int *)0x0) {
      pcVar3 = *(code **)(*piStack_20 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piStack_20 >> 8),piStack_20 != piStack_24),uStack_14
                        );
      (*pcVar3)();
      piStack_24[9] = 0;
    }
    uStack_28 = 0;
    piStack_24 = (int *)0x0;
    uStack_8 = 0;
    func_0x0046ffa0(&uStack_28);
    uStack_8 = 0xffffffff;
    if (piStack_24 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_24[1] + -1;
      piStack_24[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)*piStack_24;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        iVar2 = piStack_24[2] + -1;
        piStack_24[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)(*piStack_24 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  pppuStack_2c = (undefined ***)(auStack_4c[7] + 0x238);
  if (*(int *)(auStack_4c[7] + 0x238) != 0) {
    uVar4 = func_0x0046b930(&uStack_1c);
    uStack_8 = 1;
    func_0x005c60a0(uVar4);
    uStack_8 = 0xffffffff;
    piStack_20 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar2 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)*uStack_1c._4_4_;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        iVar2 = piStack_20[2] + -1;
        piStack_20[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)(*piStack_20 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    uStack_28 = 0;
    piStack_24 = (int *)0x0;
    uStack_8 = 2;
    func_0x0046ffa0(&uStack_28);
    uStack_8 = 0xffffffff;
    if (piStack_24 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_24[1] + -1;
      piStack_24[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)*piStack_24;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        iVar2 = piStack_24[2] + -1;
        piStack_24[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)(*piStack_24 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *(undefined1 *)(auStack_4c[7] + 0x240) = 0;
  *(undefined1 *)(auStack_4c[7] + 0x218) = 0;
  *(undefined4 *)(auStack_4c[7] + 0x25c) = 0;
  *(undefined4 *)(auStack_4c[7] + 0x260) = 0;
  *(undefined4 *)(auStack_4c[7] + 0x264) = 0;
  *(undefined4 *)(auStack_4c[7] + 0x268) = 0;
  if (*(int *)(auStack_4c[7] + 0x24c) == 0) {
    uStack_1c = 0;
    func_0x0046b930(&uStack_1c);
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    pppuStack_2c = &ppuStack_74;
    piStack_24 = &iStack_70;
    ppuStack_74 = std::_Func_impl_no_alloc<>::vftable;
    iStack_70 = (int)uStack_1c;
    iStack_6c = (int)uStack_1c._4_4_;
    auStack_4c[6] = 0;
    auStack_4c[7] = 0;
    uStack_8._1_3_ = 0;
    pppuStack_50 = &ppuStack_74;
    uStack_8._0_1_ = 9;
    auStack_4c[4] = 0;
    auStack_4c[0] = 0;
    auStack_4c[1] = 0;
    auStack_4c[2] = 0;
    auStack_4c[3] = 0;
    auStack_4c[5] = 0;
    func_0x0046bc40("Creature::terminateWalk",0x17);
    uStack_8._0_1_ = 10;
    uVar4 = FUN_005e4dd0(auStack_7c,auStack_4c,&ppuStack_74,0x32);
    uStack_8._0_1_ = 0xb;
    func_0x0046ffa0(uVar4);
    uStack_8._0_1_ = 10;
    piStack_20 = piStack_78;
    if (piStack_78 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_78[1] + -1;
      piStack_78[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)*piStack_78;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        iVar2 = piStack_20[2] + -1;
        piStack_20[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar3 = *(code **)(*piStack_20 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    uStack_8._0_1_ = 9;
    if (0xf < auStack_4c[5]) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],auStack_4c[5]);
    }
    auStack_4c[4] = 0;
    auStack_4c[5] = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    if (pppuStack_50 != (undefined ***)0x0) {
      pcVar3 = (code *)(*pppuStack_50)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_74 >> 8),pppuStack_50 != &ppuStack_74));
      (*pcVar3)();
      pppuStack_50 = (undefined ***)0x0;
    }
    uStack_8 = 0xffffffff;
    piStack_20 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar2 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar3 = *(code **)*uStack_1c._4_4_;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar1 = piStack_20 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piStack_20 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_004772a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  func_0x004672c0(param_2);
  if ((undefined4 *)(param_1 + 0x34) != param_2) {
    puVar1 = param_2 + 4;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    func_0x0046a660(param_2,*puVar1);
  }
  return;
}



void __thiscall FUN_004772e0(int *param_1,byte param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (100 < param_2) {
    param_2 = 100;
  }
  if ((char)param_1[0x61] == '\0') {
    if (param_2 < 0x5d) {
      if (param_2 < 0x3d) {
        if (param_2 < 0x1f) {
          if (param_2 < 9) {
            param_1[0x5e] = 0x3d70f0f2;
            param_1[0x5f] = 0x3d70f0f2;
            if (param_2 < 4) {
              param_1[0x5d] = 0x3e30b0b1;
            }
            else {
              param_1[0x5d] = 0x3f119192;
            }
          }
          else {
            param_1[0x5d] = 0x3f3fbfc0;
            param_1[0x5e] = 0x3d20a0a1;
            param_1[0x5f] = 0x3d20a0a1;
          }
        }
        else {
          param_1[0x5d] = 0x3f21a1a2;
          param_1[0x5e] = 0x3f21a1a2;
          param_1[0x5f] = 0;
        }
      }
      else {
        param_1[0x5d] = 0x3ea0a0a1;
        param_1[0x5e] = 0x3f21a1a2;
        param_1[0x5f] = 0x3ea0a0a1;
      }
    }
    else {
      param_1[0x5d] = 0;
      param_1[0x5e] = 0x3f3cbcbd;
      param_1[0x5f] = 0;
    }
    param_1[0x60] = 0x3f800000;
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = param_2;
  puVar3 = &stack0xfffffffc;
  if (bVar1 != param_2) {
    auStack_38[4] = 0;
    auStack_38[5] = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    func_0x0046bc40("onHealthPercentChange",0x15,uVar4);
    uStack_14 = 0;
    uVar4 = func_0x0047af80(auStack_38,&param_2);
    if (0 < (int)uVar4) {
      func_0x00d66d90(DAT_0145e9f0,~uVar4);
    }
    uStack_14 = 0xffffffff;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  if (param_2 == 0) {
    pcVar2 = *(code **)(*param_1 + 0x78);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004774d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



void __thiscall FUN_004774e0(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_98 [8];
  undefined1 auStack_78 [52];
  uint auStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaea10;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  pbVar1 = (byte *)(param_1 + 0x58);
  auStack_98[6] = param_1;
  func_0x004728b0(pbVar1,uStack_24);
  uStack_14 = 0;
  bVar2 = *param_2;
  if (bVar2 == 1) {
    uVar4 = *(uint *)(param_2 + 4) & 0xffff;
    if ((0 < (int)*(uint *)(param_2 + 4)) &&
       ((uVar4 == 0 || ((uint)(DAT_0145d8b0 - DAT_0145d8ac >> 3) <= uVar4)))) goto LAB_004776c5;
    *pbVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x30);
    pbVar3 = param_2 + 0x34;
    if ((byte *)(param_1 + 0x8c) != pbVar3) {
      if (0xf < *(uint *)(param_2 + 0x48)) {
        pbVar3 = *(byte **)pbVar3;
      }
      func_0x0046a660(pbVar3,*(undefined4 *)(param_2 + 0x44));
    }
    *(byte *)(param_1 + 0xa4) = param_2[0x4c];
  }
  else {
    if ((*(ushort *)(param_2 + 8) == 0) ||
       ((uint)((int)((&DAT_0145d8a4)[(uint)bVar2 * 3] - (&DAT_0145d8a0)[(uint)bVar2 * 3]) >> 3) <=
        (uint)*(ushort *)(param_2 + 8))) goto LAB_004776c5;
    *(undefined4 *)(auStack_98[6] + 0x60) = *(undefined4 *)(param_2 + 8);
    *pbVar1 = *param_2;
    *(undefined4 *)(auStack_98[6] + 0x7c) = 0;
    *(undefined4 *)(auStack_98[6] + 0x80) = 0;
  }
  *(undefined4 *)(auStack_98[6] + 0x214) = 0;
  auStack_98[4] = 0;
  auStack_98[0] = 0;
  auStack_98[1] = 0;
  auStack_98[2] = 0;
  auStack_98[3] = 0;
  auStack_98[5] = 0;
  func_0x0046bc40("onOutfitChange",0xe);
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  uVar4 = func_0x0047b2d0(auStack_98,pbVar1,auStack_78);
  if (0 < (int)uVar4) {
    func_0x00d66d90(DAT_0145e9f0,~uVar4);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < auStack_98[5]) {
    func_0x0046b1f0(auStack_98,auStack_98[0],auStack_98[5]);
  }
  auStack_98[4] = 0;
  auStack_98[5] = 0xf;
  auStack_98[0] = auStack_98[0] & 0xffffff00;
LAB_004776c5:
  uStack_14 = 0xffffffff;
  if (0xf < uStack_30) {
    func_0x0046b1f0(auStack_44,auStack_44[0],uStack_30);
  }
  uStack_34 = 0;
  uStack_30 = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00477720(int param_1,float *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int *unaff_FS_OFFSET;
  float fVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_30;
  int *piStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaea4d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iVar4 = *(int *)(param_1 + 0x1a0);
  iStack_28 = param_1;
  puVar7 = &stack0xfffffffc;
  if (iVar4 != 0) {
    piStack_2c = (int *)(iVar4 + 0x28);
    *(undefined1 *)(iVar4 + 0x50) = 1;
    piVar5 = *(int **)(iVar4 + 0x4c);
    puVar7 = &stack0xfffffffc;
    if (piVar5 != (int *)0x0) {
      pcVar6 = *(code **)(*piVar5 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piVar5 >> 8),piVar5 != piStack_2c),uStack_24);
      (*pcVar6)();
      piStack_2c[9] = 0;
      puVar7 = puStack_20;
    }
    puStack_20 = puVar7;
    fStack_30 = 0.0;
    piStack_2c = (int *)0x0;
    uStack_14 = 0;
    func_0x0046ffa0(&fStack_30);
    piVar5 = piStack_2c;
    uStack_14 = 0xffffffff;
    puVar7 = puStack_20;
    if (piStack_2c != (int *)0x0) {
      LOCK();
      iVar4 = piStack_2c[1] + -1;
      piStack_2c[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar6 = *(code **)*piStack_2c;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        piVar1 = piVar5 + 2;
        iVar4 = *piVar1 + -1;
        *piVar1 = iVar4;
        UNLOCK();
        puVar7 = puStack_20;
        if (iVar4 == 0) {
          pcVar6 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar6)();
          puVar7 = puStack_20;
        }
      }
    }
  }
  puStack_20 = puVar7;
  fVar2 = *param_2;
  if (param_3 < 1) {
    *(float *)(iStack_28 + 400) = fVar2;
    *(float *)(iStack_28 + 0x194) = param_2[1];
    *(float *)(iStack_28 + 0x198) = param_2[2];
    *(float *)(iStack_28 + 0x19c) = param_2[3];
  }
  else {
    fVar8 = 1.0 / (float)param_3;
    fVar3 = param_2[1];
    fStack_30 = fVar8 * (param_2[2] - *(float *)(iStack_28 + 0x198));
    piStack_2c = (int *)(fVar8 * (param_2[3] - *(float *)(iStack_28 + 0x19c)));
    uStack_40 = (undefined4)DAT_0145db28;
    uStack_3c = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
    *(undefined4 *)(iStack_28 + 0x1a8) = uStack_40;
    *(undefined4 *)(iStack_28 + 0x1ac) = uStack_3c;
    *(undefined1 *)(iStack_28 + 0x1b0) = 0;
    func_0x00477930(param_3,*(undefined4 *)(iStack_28 + 400),*(undefined4 *)(iStack_28 + 0x194),
                    *(undefined4 *)(iStack_28 + 0x198),*(undefined4 *)(iStack_28 + 0x19c),*param_2,
                    param_2[1],param_2[2],param_2[3],fVar8 * (fVar2 - *(float *)(iStack_28 + 400)),
                    fVar8 * (fVar3 - *(float *)(iStack_28 + 0x194)),fStack_30,piStack_2c);
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00477cc0(int *param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined2 auStack_24 [2];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaeb3d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_24[0] = (undefined2)param_1[0x2d];
  *(undefined2 *)(param_1 + 0x2d) = param_2;
  puVar2 = &stack0xfffffffc;
  if ((char)param_1[0x90] != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x90);
    _guard_check_icall(uVar3);
    (*pcVar1)();
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("onSpeedChange",0xd);
  uStack_14 = 0;
  uVar3 = func_0x0047b630(&uStack_3c,param_1 + 0x2d,auStack_24);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_28) {
    func_0x0046b1f0(&uStack_3c,uStack_3c,uStack_28);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00477dd0(int param_1,double param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  double dStack_28;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaeb6d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  dStack_28 = *(double *)(param_1 + 0xb8);
  if (dStack_28 != param_2) {
    *(double *)(param_1 + 0xb8) = param_2;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("onBaseSpeedChange",0x11,uVar1);
    uStack_14 = 0;
    uVar1 = func_0x0047b9a0(&uStack_40,&param_2,&dStack_28);
    if (0 < (int)uVar1) {
      func_0x00d66d90(DAT_0145e9f0,~uVar1);
    }
    uStack_14 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00477ed0(int param_1,undefined1 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  *(undefined1 *)(param_1 + 0xc0) = param_2;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  func_0x0046bc40("onSkullChange",0xd,uVar1);
  uStack_14 = 0;
  uVar1 = func_0x0047af80(&uStack_38,(undefined1 *)(param_1 + 0xc0));
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00477fc0(int param_1,undefined1 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  *(undefined1 *)(param_1 + 0xc1) = param_2;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  func_0x0046bc40("onShieldChange",0xe,uVar1);
  uStack_14 = 0;
  uVar1 = func_0x0047af80(&uStack_38,(undefined1 *)(param_1 + 0xc1));
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_004780a0(int param_1,undefined1 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  *(undefined1 *)(param_1 + 0xc2) = param_2;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  func_0x0046bc40("onEmblemChange",0xe,uVar1);
  uStack_14 = 0;
  uVar1 = func_0x0047af80(&uStack_38,(undefined1 *)(param_1 + 0xc2));
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



int FUN_00478260(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar5 = func_0x0062b230(auStack_1c,param_1,uVar4);
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_18 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __thiscall FUN_00478310(int param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [8];
  undefined4 *puStack_7c;
  undefined **ppuStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined ***pppuStack_54;
  uint auStack_50 [8];
  undefined ***pppuStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaebf0;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar3 = func_0x0062b230(&uStack_2c,param_2,uStack_24);
  uStack_14 = 0;
  func_0x0046ffa0(uVar3);
  uStack_14 = 0xffffffff;
  pppuStack_30 = uStack_2c._4_4_;
  if (uStack_2c._4_4_ != (undefined ***)0x0) {
    LOCK();
    ppuVar2 = (undefined **)((int)uStack_2c._4_4_[1] + -1);
    uStack_2c._4_4_[1] = ppuVar2;
    UNLOCK();
    if (ppuVar2 == (undefined **)0x0) {
      pcVar1 = (code *)**uStack_2c._4_4_;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      ppuVar2 = (undefined **)((int)pppuStack_30[2] + -1);
      pppuStack_30[2] = ppuVar2;
      UNLOCK();
      if (ppuVar2 == (undefined **)0x0) {
        pcVar1 = (code *)(*pppuStack_30)[1];
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 1;
  if ((param_3 != '\0') && (*(char *)(param_1 + 0xf1) == '\0')) {
    uStack_2c = 0;
    func_0x0046b930(&uStack_2c);
    if (uStack_2c._4_4_ != (undefined ***)0x0) {
      LOCK();
      *(int *)((int)uStack_2c._4_4_ + 4) = *(int *)((int)uStack_2c._4_4_ + 4) + 1;
      UNLOCK();
    }
    pppuStack_30 = &ppuStack_78;
    puStack_7c = &uStack_74;
    ppuStack_78 = std::_Func_impl_no_alloc<>::vftable;
    uStack_74 = (undefined4)uStack_2c;
    iStack_70 = (int)uStack_2c._4_4_;
    auStack_50[6] = 0;
    auStack_50[7] = 0;
    uStack_14._1_3_ = 0;
    pppuStack_54 = &ppuStack_78;
    uStack_14._0_1_ = 7;
    auStack_50[4] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    auStack_50[5] = 0;
    func_0x0046bc40("Creature::setShieldTexture",0x1a);
    uStack_14._0_1_ = 8;
    FUN_005e4dd0(auStack_84,auStack_50,&ppuStack_78,500);
    FUN_00468340();
    uStack_14._0_1_ = 7;
    if (0xf < auStack_50[5]) {
      func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
    }
    auStack_50[4] = 0;
    auStack_50[5] = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    if (pppuStack_54 != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_54)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_78 >> 8),pppuStack_54 != &ppuStack_78));
      (*pcVar1)();
      pppuStack_54 = (undefined ***)0x0;
    }
    uStack_14 = 0xffffffff;
    FUN_00468340();
  }
  *(char *)(param_1 + 0xf1) = param_3;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



int FUN_00478550(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar5 = func_0x0062b230(auStack_1c,param_1,uVar4);
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_18 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



int FUN_00478600(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar5 = func_0x0062b230(auStack_1c,param_1,uVar4);
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_18 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



int FUN_004786b0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar5 = func_0x0062b230(auStack_1c,param_1,uVar4);
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_18 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



uint __thiscall FUN_00478c20(int *param_1,char param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  double dVar9;
  float fVar10;
  uint uVar11;
  double dVar12;
  uint uStack_30;
  int iStack_28;
  short sStack_24;
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [16];
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x2d);
  if (uVar7 == 0) {
    return 0;
  }
  uVar11 = uVar7 * 2 & 0xffff;
  if ((DAT_0145d0c4 & 0x10) == 0) {
    uVar11 = uVar7;
  }
  if (param_3 == 8) {
    iVar4 = param_1[0x9f];
    iStack_28 = param_1[0xa0];
    sStack_24 = (short)param_1[0xa1];
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x80);
    _guard_check_icall(auStack_14,1);
    (*pcVar1)();
    piVar5 = (int *)func_0x00471be0(&iStack_28,param_3);
    iVar4 = *piVar5;
    iStack_28 = piVar5[1];
    sStack_24 = (short)piVar5[2];
  }
  if (((iVar4 == 0xffff) && (iStack_28 == 0xffff)) && (sStack_24 == 0xff)) {
    pcVar1 = *(code **)(*param_1 + 0x80);
    _guard_check_icall(auStack_20,1);
    iVar4 = (*pcVar1)();
    iStack_28 = *(int *)(iVar4 + 4);
    sStack_24 = *(short *)(iVar4 + 8);
  }
  piVar5 = (int *)FUN_00572b50();
  if (*piVar5 == 0) {
    uVar7 = 0;
LAB_00478d47:
    uStack_30 = 1000;
    if ((short)uVar7 == 0) goto LAB_00478d69;
  }
  else {
    uVar3 = func_0x005c72d0();
    uVar7 = (uint)uVar3;
    if (uVar3 != 0) goto LAB_00478d47;
    uVar7 = 0x96;
  }
  uStack_30 = 1000;
  if ((short)uVar11 != 0) {
    uStack_30 = uVar7 * 1000;
  }
LAB_00478d69:
  if ((((DAT_0145d0c4 & 0x10) == 0) || (DAT_012bbf10 == -1.0)) ||
     ((DAT_012bbf18 == -1.0 || (DAT_012bbf20 == -1.0)))) {
    uStack_30 = uStack_30 / uVar11;
  }
  else {
    iVar4 = 1;
    if (-DAT_012bbf18 < (double)uVar11) {
      dVar9 = (double)(uVar11 >> 1) + DAT_012bbf18;
      func_0x00eaab4e();
      dVar12 = dVar9 * DAT_012bbf10 + DAT_012bbf20 + 0.5;
      uVar11 = (uint)((ulonglong)dVar12 >> 0x20);
      uVar7 = uVar11 & 0x80000000;
      dVar9 = (double)((ulonglong)
                       ((uint)(-(ulonglong)
                                ((double)CONCAT44(uVar11 ^ uVar7,SUB84(dVar12,0)) <
                                4503599627370496.0) >> 0x20) & 0x43300000 | uVar7) << 0x20);
      dVar9 = (dVar12 + dVar9) - dVar9;
      iVar6 = (int)(dVar9 - (double)(-(ulonglong)
                                      ((double)((ulonglong)uVar7 << 0x20) < dVar9 - dVar12) &
                                    0x3ff0000000000000));
      iVar4 = 1;
      if (1 < iVar6) {
        iVar4 = iVar6;
      }
    }
    dVar12 = (double)uStack_30 / (double)iVar4;
    uVar7 = (uint)((ulonglong)dVar12 >> 0x20);
    uVar11 = uVar7 & 0x80000000;
    dVar9 = (double)((ulonglong)
                     ((uint)(-(ulonglong)
                              ((double)CONCAT44(uVar7 ^ uVar11,SUB84(dVar12,0)) < 4503599627370496.0
                              ) >> 0x20) & 0x43300000 | uVar11) << 0x20);
    dVar9 = (dVar12 + dVar9) - dVar9;
    uStack_30 = (uint)(dVar9 - (double)((ulonglong)
                                        ((uint)(-(ulonglong)
                                                 ((double)((ulonglong)uVar11 << 0x20) <
                                                 dVar9 - dVar12) >> 0x20) & 0x3ff00000) << 0x20));
  }
  uVar7 = DAT_0145d024;
  if ((899 < DAT_0145d0fc) && ((DAT_0145d0c8 & 0x4000000) == 0)) {
    fVar8 = (float10)func_0x008ab09a((double)((float)(int)uStack_30 / (float)(int)DAT_0145d024));
    uStack_30 = (uint)((float)fVar8 * (float)(int)uVar7);
  }
  fVar10 = 3.0;
  if (DAT_0145d0fc < 0x32b) {
    fVar10 = 2.0;
  }
  if ((int)uStack_30 < (int)uVar7) {
    uStack_30 = uVar7;
  }
  if ((param_2 == '\0') &&
     ((((iVar4 = param_1[0x9b], iVar4 == 7 || (iVar4 == 4)) || (iVar4 == 6)) || (iVar4 == 5)))) {
    uStack_30 = (uint)((float)(int)uStack_30 * fVar10);
  }
  pcVar1 = *(code **)(*param_1 + 0x84);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  if ((cVar2 == '\0') && ((DAT_0145d0c8 & 0x8000000) != 0)) {
    uStack_30 = uStack_30 + 0x19;
  }
  pcVar1 = *(code **)(*param_1 + 0x84);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  if (((cVar2 == '\0') || ((DAT_0145d0c8 & 0x4000000) == 0)) ||
     (uVar7 = (uint)*(ushort *)((int)param_1 + 0x296), *(ushort *)((int)param_1 + 0x296) == 0)) {
    uVar7 = uStack_30;
  }
  return uVar7;
}



void __thiscall FUN_00479020(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if ((char)param_1[0x16] == '\x02') {
    fVar4 = (float)DAT_0145d7e0;
    *param_2 = (int)(fVar4 * 0.25);
    param_2[1] = (int)(fVar4 * 0.25);
    return;
  }
  if ((char)param_1[0x16] == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  if (param_1[0x1e] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
  }
  else {
    iVar3 = *(int *)(DAT_0145d8ac + (param_1[0x1e] & 0xffffU) * 8);
  }
  fVar4 = (float)DAT_0145d7e0;
  iVar2 = *(int *)(iVar3 + 0x30);
  *param_2 = (int)((float)*(int *)(iVar3 + 0x2c) * fVar4 * 0.03125);
  param_2[1] = (int)((float)iVar2 * fVar4 * 0.03125);
  return;
}



int __fastcall FUN_004790e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((char)param_1[0x16] == '\x02') {
    return (int)((float)DAT_0145d7e0 * 0.25);
  }
  if ((char)param_1[0x16] == '\0') {
    return 0;
  }
  if (param_1[0x1e] != 0) {
    return (int)((float)*(int *)(*(int *)(DAT_0145d8ac + (param_1[0x1e] & 0xffffU) * 8) + 0x2c) *
                 (float)DAT_0145d7e0 * 0.03125);
  }
  pcVar1 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  return (int)((float)DAT_0145d7e0 * 0.03125 * (float)*(int *)(iVar2 + 0x2c));
}



int __fastcall FUN_00479180(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((char)param_1[0x16] == '\x02') {
    return (int)((float)DAT_0145d7e0 * 0.25);
  }
  if ((char)param_1[0x16] == '\0') {
    return 0;
  }
  if ((param_1[0x1e] == 0) ||
     (iVar2 = *(int *)(DAT_0145d8ac + (param_1[0x1e] & 0xffffU) * 8), iVar2 == 0)) {
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
  }
  return (int)((float)DAT_0145d7e0 * 0.03125 * (float)*(int *)(iVar2 + 0x30));
}



int __fastcall FUN_00479200(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iStack_14;
  int iStack_10;
  
  iVar6 = 0;
  iStack_14 = 0;
  iVar1 = param_1[0x1e];
  pcVar2 = *(code **)(*param_1 + 0x40);
  _guard_check_icall();
  iVar3 = (*pcVar2)();
  if (0 < *(int *)(iVar3 + 0x60)) {
    do {
      if ((iStack_14 < 1) || ((param_1[0x1d] & 1 << ((char)iStack_14 - 1U & 0x1f)) != 0)) {
        iStack_10 = 0;
        pcVar2 = *(code **)(*param_1 + 0x40);
        _guard_check_icall();
        iVar3 = (*pcVar2)();
        if (0 < *(int *)(iVar3 + 0x68)) {
          do {
            pcVar2 = *(code **)(*param_1 + 0x40);
            _guard_check_icall();
            iVar3 = (*pcVar2)();
            if (*(char *)(iVar3 + 0x14) == '\0') {
              func_0x005bdbc0(0);
              iVar4 = ((*(int *)(iVar3 + 100) * iStack_10 + (uint)(iVar1 != 0)) *
                       *(int *)(iVar3 + 0x60) + iStack_14) * *(int *)(iVar3 + 0x5c) + 2;
              piVar5 = (int *)(iVar4 * 0x10 + **(int **)(iVar3 + 0xb0));
              iVar7 = ((piVar5[2] - *(int *)(**(int **)(iVar3 + 0xbc) + iVar4 * 8)) - *piVar5) + 1;
              iVar3 = ((piVar5[3] - *(int *)(**(int **)(iVar3 + 0xbc) + iVar4 * 8 + 4)) - piVar5[1])
                      + 1;
              if (iVar7 < iVar3) {
                iVar7 = iVar3;
              }
            }
            else {
              iVar7 = 0;
            }
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            iStack_10 = iStack_10 + 1;
            pcVar2 = *(code **)(*param_1 + 0x40);
            _guard_check_icall();
            iVar3 = (*pcVar2)();
          } while (iStack_10 < *(int *)(iVar3 + 0x68));
        }
      }
      iStack_14 = iStack_14 + 1;
      pcVar2 = *(code **)(*param_1 + 0x40);
      _guard_check_icall();
      iVar3 = (*pcVar2)();
    } while (iStack_14 < *(int *)(iVar3 + 0x60));
  }
  return iVar6;
}



void __fastcall FUN_00479350(int param_1)

{
  FUN_005c37e0(*(undefined2 *)(param_1 + 0x5c),1);
  return;
}



undefined4 __fastcall FUN_00479370(int param_1)

{
  return *(undefined4 *)(DAT_0145d8ac + (uint)*(ushort *)(param_1 + 0x5c) * 8);
}



void __thiscall FUN_00479380(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x2b8) == 0) {
    uVar5 = func_0x0047a5d0(uVar4);
    uStack_8 = 0;
    func_0x0046ffa0(uVar5);
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_18[1] + -1;
      piStack_18[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_18 + 2;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  func_0x004672c0(param_2);
  iVar3 = *(int *)(param_1 + 0x2b8);
  *(undefined4 *)(iVar3 + 100) = *param_3;
  *(undefined4 *)(iVar3 + 0x68) = param_3[1];
  *(undefined4 *)(iVar3 + 0x6c) = param_3[2];
  *(undefined4 *)(iVar3 + 0x70) = param_3[3];
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00479460(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaed70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x2b8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0);
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  uStack_8 = 2;
  func_0x00469da0(*(int *)(param_1 + 0x2b8) + 0x74,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00479540(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (*param_2 != 0) {
    for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x2d0);
        puVar1 != *(undefined4 **)(param_1 + 0x2d0); puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == *param_2) {
        return;
      }
    }
    func_0x0047a2b0(param_2);
  }
  return;
}



void __thiscall FUN_00479580(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (*param_2 != 0) {
    for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x2c0);
        puVar1 != *(undefined4 **)(param_1 + 0x2c0); puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == *param_2) {
        return;
      }
    }
    func_0x0047a2b0(param_2);
  }
  return;
}



void __thiscall FUN_004795c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (*param_2 != 0) {
    for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x2c8);
        puVar1 != *(undefined4 **)(param_1 + 0x2c8); puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == *param_2) {
        return;
      }
    }
    func_0x0047a2b0(param_2);
  }
  return;
}



void __fastcall FUN_00479600(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  int iStack_14;
  int *piStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&iStack_14;
  piStack_10 = (int *)0x0;
  iStack_14 = param_1;
  func_0x0047a770(**(undefined4 **)(param_1 + 0x2d0),*(undefined4 **)(param_1 + 0x2d0));
  piVar2 = piStack_10;
  if (piStack_10 != *(int **)(param_1 + 0x2d0)) {
    do {
      FUN_00856da0();
      piVar1 = (int *)*piVar2;
      *(int **)piVar2[1] = piVar1;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)(iStack_14 + 0x2d4) = *(int *)(iStack_14 + 0x2d4) + -1;
      func_0x0047aa40(extraout_ECX);
      func_0x008ab812(piVar2,0x10);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(iStack_14 + 0x2d0));
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_004796b0(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  int iStack_14;
  int *piStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&iStack_14;
  piStack_10 = (int *)0x0;
  iStack_14 = param_1;
  func_0x0047a770(**(undefined4 **)(param_1 + 0x2c0),*(undefined4 **)(param_1 + 0x2c0));
  piVar2 = piStack_10;
  if (piStack_10 != *(int **)(param_1 + 0x2d0)) {
    do {
      FUN_00856da0();
      piVar1 = (int *)*piVar2;
      *(int **)piVar2[1] = piVar1;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)(iStack_14 + 0x2c4) = *(int *)(iStack_14 + 0x2c4) + -1;
      func_0x0047aa40(extraout_ECX);
      func_0x008ab812(piVar2,0x10);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(iStack_14 + 0x2d0));
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_00479760(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  
  piVar1 = (int *)func_0x0047a770(**(undefined4 **)(param_1 + 0x2c8),
                                  *(undefined4 **)(param_1 + 0x2c8));
  piVar1 = (int *)*piVar1;
  piVar2 = (int *)*piVar1;
  *(int **)piVar1[1] = piVar2;
  *(int *)(*piVar1 + 4) = piVar1[1];
  *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + -1;
  func_0x0047aa40();
  func_0x008ab812(piVar1,0x10);
  if (piVar2 != *(int **)(param_1 + 0x2d0)) {
    do {
      FUN_00856da0();
      piVar1 = (int *)*piVar2;
      *(int **)piVar2[1] = piVar1;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + -1;
      func_0x0047aa40(extraout_ECX);
      func_0x008ab812(piVar2,0x10);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x2d0));
  }
  return;
}



undefined4 * __thiscall FUN_00479810(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaedae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0047a8b0(**(undefined4 **)(param_1 + 0x2d0),*(undefined4 **)(param_1 + 0x2d0),uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00479880(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaedae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0047a8b0(**(undefined4 **)(param_1 + 0x2c0),*(undefined4 **)(param_1 + 0x2c0),uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_004798f0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaedae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0047a8b0(**(undefined4 **)(param_1 + 0x2c8),*(undefined4 **)(param_1 + 0x2c8),uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __fastcall FUN_00479960(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00479980();
  FUN_004799c0();
  puVar1 = *(undefined4 **)(param_1 + 0x2c8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_00856da0();
  }
  func_0x0047a230();
  return;
}



void __fastcall FUN_00479980(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2d0);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_00856da0();
  }
  func_0x0047a230();
  return;
}



void __fastcall FUN_004799c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c0);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_00856da0();
  }
  func_0x0047a230();
  return;
}



void __fastcall FUN_00479a00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_00856da0();
  }
  func_0x0047a230();
  return;
}



void __thiscall FUN_00479bb0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaede5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_38 = CONCAT44((int *)(param_1 + 0x2dc),(undefined4)uStack_38);
  iVar2 = *(int *)(param_1 + 0x2dc);
  iStack_24 = param_1;
  puVar6 = &stack0xfffffffc;
  if (iVar2 != 0) {
    piStack_28 = (int *)(iVar2 + 0x28);
    *(undefined1 *)(iVar2 + 0x50) = 1;
    piVar3 = *(int **)(iVar2 + 0x4c);
    puVar6 = &stack0xfffffffc;
    if (piVar3 != (int *)0x0) {
      pcVar4 = *(code **)(*piVar3 + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)*piVar3 >> 8),piVar3 != piStack_28),uVar7);
      (*pcVar4)();
      piStack_28[9] = 0;
      puVar6 = puStack_20;
    }
    puStack_20 = puVar6;
    uStack_2c = 0;
    piStack_28 = (int *)0x0;
    uStack_14 = 0;
    func_0x0046ffa0(&uStack_2c);
    piVar3 = piStack_28;
    uStack_14 = 0xffffffff;
    puVar6 = puStack_20;
    if (piStack_28 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_28[1] + -1;
      piStack_28[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar4 = *(code **)*piStack_28;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        piVar1 = piVar3 + 2;
        iVar2 = *piVar1 + -1;
        *piVar1 = iVar2;
        UNLOCK();
        puVar6 = puStack_20;
        if (iVar2 == 0) {
          pcVar4 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar4)();
          puVar6 = puStack_20;
        }
      }
    }
  }
  puStack_20 = puVar6;
  if (param_2 == 0) {
    *(undefined1 *)(iStack_24 + 0x2d8) = 0;
  }
  else {
    uStack_38 = DAT_0145db28;
    uVar5 = uStack_38;
    uStack_38._0_4_ = (undefined4)DAT_0145db28;
    uStack_38._4_4_ = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
    *(undefined4 *)(iStack_24 + 0x2ec) = uStack_38._4_4_;
    *(undefined4 *)(iStack_24 + 0x2e8) = (undefined4)uStack_38;
    *(undefined1 *)(iStack_24 + 0x2f0) = 0;
    uStack_38 = uVar5;
    func_0x00479d80(param_2,param_3);
  }
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  func_0x0046bc40("onProgressBarStart",0x12);
  uStack_14 = 1;
  uVar7 = func_0x0047bcf0(&uStack_50,&param_2,&param_3);
  if (0 < (int)uVar7) {
    func_0x00d66d90(DAT_0145e9f0,~uVar7);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_3c) {
    func_0x0046b1f0(&uStack_50,uStack_50,uStack_3c);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_0047a150(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ead7cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x004672c0(param_2,uVar3);
  if (*(int *)(param_3 + 0x10) != 0) {
    uVar4 = func_0x0061cc30(auStack_1c,param_3);
    uStack_8 = 0;
    func_0x00467260(uVar4);
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_18[1] + -1;
      piStack_18[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar2 = piStack_18[2] + -1;
        piStack_18[2] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*piStack_18 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x204) = *param_4;
  *(undefined4 *)(param_1 + 0x208) = param_4[1];
  *(undefined4 *)(param_1 + 0x20c) = param_4[2];
  *(undefined4 *)(param_1 + 0x210) = param_4[3];
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0047ab80(int param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)**(undefined4 **)(param_1 + 0xc);
  _guard_check_icall(0);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_0047aba0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd4);
  }
  return param_1;
}



int __thiscall FUN_0047c690(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead568;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = param_1 + 4;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  if (param_2 != '\0') {
    iVar6 = func_0x008ab812(param_1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



TypeDescriptor * FUN_0047c740(void)

{
  return &`public:_void___thiscall_Creature::updateProgressBar(unsigned_int,bool)'::__l5::<lambda_1>
          ::RTTI_Type_Descriptor;
}



void __fastcall FUN_0047c750(int param_1)

{
  func_0x00479d80(*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0x10));
  return;
}



undefined4 * __thiscall FUN_0047c770(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



undefined4 * __thiscall FUN_0047c800(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x10);
  *unaff_FS_OFFSET = iVar2;
  return param_2;
}



TypeDescriptor * FUN_0047c890(void)

{
  return &`public:_void___thiscall_Creature::updateShield(void)'::__l5::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0047c8a0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [8];
  undefined4 *puStack_6c;
  undefined ***pppuStack_68;
  undefined **ppuStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined ***pppuStack_40;
  uint auStack_3c [8];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaecf8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(bool *)(iVar2 + 0xf0) = *(char *)(iVar2 + 0xf0) == '\0';
  if (*(char *)(iVar2 + 0xc1) == '\0') {
    if (*(char *)(iVar2 + 0xf1) != '\0') goto LAB_00478b39;
  }
  else if (*(char *)(iVar2 + 0xf1) != '\0') {
    uStack_1c = 0;
    func_0x0046b930(&uStack_1c,uStack_14);
    if (uStack_1c._4_4_ != 0) {
      LOCK();
      *(int *)(uStack_1c._4_4_ + 4) = *(int *)(uStack_1c._4_4_ + 4) + 1;
      UNLOCK();
    }
    pppuStack_68 = &ppuStack_64;
    puStack_6c = &uStack_60;
    ppuStack_64 = std::_Func_impl_no_alloc<>::vftable;
    uStack_60 = (undefined4)uStack_1c;
    iStack_5c = uStack_1c._4_4_;
    auStack_3c[6] = 0;
    auStack_3c[7] = 0;
    uStack_8._1_3_ = 0;
    pppuStack_40 = &ppuStack_64;
    uStack_8._0_1_ = 6;
    auStack_3c[4] = 0;
    auStack_3c[0] = 0;
    auStack_3c[1] = 0;
    auStack_3c[2] = 0;
    auStack_3c[3] = 0;
    auStack_3c[5] = 0;
    func_0x0046bc40("Creature::updateShield",0x16);
    uStack_8._0_1_ = 7;
    FUN_005e4dd0(auStack_74,auStack_3c,&ppuStack_64,500);
    FUN_00468340();
    uStack_8._0_1_ = 6;
    if (0xf < auStack_3c[5]) {
      func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
    }
    auStack_3c[4] = 0;
    auStack_3c[5] = 0xf;
    auStack_3c[0] = auStack_3c[0] & 0xffffff00;
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    if (pppuStack_40 != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_40)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_64 >> 8),pppuStack_40 != &ppuStack_64));
      (*pcVar1)();
      pppuStack_40 = (undefined ***)0x0;
    }
    uStack_8 = 0xffffffff;
    FUN_00468340();
    goto LAB_00478b39;
  }
  *(undefined1 *)(iVar2 + 0xf0) = 1;
LAB_00478b39:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0047c8b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047c930(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0047c9b0(void)

{
  return &`public:_void___thiscall_Creature::addTimedSquare(unsigned_char)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0047c9c0(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x124) = 0;
  return;
}



void __thiscall FUN_0047c9d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047ca50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0047cad0(void)

{
  return &`public:_void___thiscall_Creature::setShieldTexture(class_std::basic_string<>_const&,bool)'
          ::__l5::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0047cae0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047cb60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



int __thiscall FUN_0047cbe0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead568;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = param_1 + 4;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  if (param_2 != '\0') {
    iVar6 = func_0x008ab812(param_1,0x40);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



TypeDescriptor * FUN_0047cc90(void)

{
  return &`protected:_void___thiscall_Creature::updateOutfitColor(class_Color,class_Color,class_Color,int)'
          ::__l5::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0047cca0(int param_1)

{
  func_0x00477930(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xc),
                  *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                  *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                  *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                  *(undefined4 *)(param_1 + 0x38));
  return;
}



undefined4 * __fastcall FUN_0047ccd0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaf150;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar6 = (undefined4 *)func_0x008ab47d(0x40,uVar5);
  *puVar6 = std::_Func_impl_no_alloc<>::vftable;
  puVar6[1] = 0;
  puVar6[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[1] = *(undefined4 *)(param_1 + 4);
  puVar6[2] = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  puVar6[3] = *(undefined4 *)(param_1 + 0xc);
  puVar6[4] = uVar2;
  puVar6[5] = uVar3;
  puVar6[6] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  puVar6[7] = *(undefined4 *)(param_1 + 0x1c);
  puVar6[8] = uVar2;
  puVar6[9] = uVar3;
  puVar6[10] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  puVar6[0xb] = *(undefined4 *)(param_1 + 0x2c);
  puVar6[0xc] = uVar2;
  puVar6[0xd] = uVar3;
  puVar6[0xe] = uVar4;
  puVar6[0xf] = *(undefined4 *)(param_1 + 0x3c);
  *unaff_FS_OFFSET = iStack_10;
  return puVar6;
}



TypeDescriptor * FUN_0047cd90(void)

{
  return &`protected:_virtual_void___thiscall_Creature::terminateWalk(void)'::__l11::<lambda_1>::
          RTTI_Type_Descriptor;
}



int __fastcall FUN_0047cda0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  piStack_14 = (int *)0x0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x21c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x214) = 0;
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(&uStack_18,uVar5);
  piVar4 = piStack_14;
  uStack_8 = 0xffffffff;
  if (piStack_14 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_14 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_14;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void __thiscall FUN_0047ce60(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047cee0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0047cf60(void)

{
  return &`protected:_virtual_void___thiscall_Creature::nextWalkUpdate(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_0047cf80(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eae5dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  piStack_18 = (int *)0x0;
  uStack_8 = 0;
  func_0x0046ffa0(&uStack_1c,uVar5);
  piVar4 = piStack_18;
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_18[1] + -1;
    piStack_18[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  pcVar2 = *(code **)(**(int **)(iStack_14 + 4) + 0x90);
  _guard_check_icall();
  (*pcVar2)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0047d050(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047d0d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0047d150(void)

{
  return &`protected:_virtual_void___thiscall_Creature::updateWalkAnimation(unsigned_char)'::__l28::
          <lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0047d160(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047d1e0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0047d260(void)

{
  return &`public:_virtual_void___thiscall_Creature::onDisappear(void)'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0047d270(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint auStack_2c [5];
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piStack_14 = (int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae785;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined1 *)(*piStack_14 + 0x126) = 1;
  pcVar2 = *(code **)(*(int *)*piStack_14 + 0x74);
  _guard_check_icall(uVar6);
  (*pcVar2)();
  piVar4 = piStack_14;
  auStack_2c[4] = 0;
  auStack_2c[0] = 0;
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  piStack_18 = (int *)0x0;
  func_0x0046bc40("onDisappear",0xb);
  uStack_8 = 0;
  uVar6 = func_0x00470bf0(auStack_2c);
  if (0 < (int)uVar6) {
    func_0x00d66d90(DAT_0145e9f0,~uVar6);
  }
  uStack_8 = 0xffffffff;
  if (0xf < piStack_18) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],piStack_18);
  }
  auStack_2c[4] = 0;
  piStack_18 = (int *)0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  pcVar2 = *(code **)(*(int *)*piVar4 + 0x30);
  _guard_check_icall();
  cVar5 = (*pcVar2)();
  if (cVar5 == '\0') {
    auStack_2c[3] = 0xffff;
    auStack_2c[4] = 0xffff;
    piStack_18 = (int *)CONCAT22(piStack_18._2_2_,0xff);
    FUN_005b9e30(auStack_2c + 3);
  }
  auStack_2c[4] = 0;
  piStack_18 = (int *)0x0;
  iVar3 = *piStack_14;
  *(undefined4 *)(iVar3 + 0x288) = 0xffff;
  *(undefined4 *)(iVar3 + 0x28c) = 0xffff;
  *(undefined2 *)(iVar3 + 0x290) = 0xff;
  uStack_8 = 1;
  func_0x0046ffa0(auStack_2c + 4);
  piVar4 = piStack_18;
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_18[1] + -1;
    piStack_18[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  FUN_00479980();
  FUN_004799c0();
  FUN_00479a00();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0047d280(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047d300(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



TypeDescriptor * FUN_0047d380(void)

{
  return &`protected:_void___thiscall_Creature::updateJump(void)'::__l5::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_0047d390(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined **ppuStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined ***pppuStack_84;
  uint auStack_80 [6];
  double dStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined ***pppuStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 *puStack_44;
  undefined8 uStack_40;
  int *piStack_34;
  undefined8 uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  iVar6 = *(int *)(param_1 + 4);
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eae661;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = CONCAT44(DAT_0145db28._4_4_,(float)DAT_0145db28);
  uStack_60._4_4_ = DAT_0145db28._4_4_;
  fVar7 = *(float *)(iVar6 + 0x29c);
  dVar8 = (double)((int)(float)DAT_0145db28 - *(int *)(iVar6 + 0x2a8));
  dStack_68 = (double)((*(float *)(iVar6 + 0x298) * -4.0) / (fVar7 * fVar7));
  dStack_58 = (double)((*(float *)(iVar6 + 0x298) * 4.0) / fVar7);
  dVar8 = (dVar8 * dStack_68 + dStack_58) * dVar8;
  uStack_40 = dVar8;
  uStack_24 = uVar3;
  func_0x0083bc10(uVar3);
  pppuStack_50 = (undefined ***)(int)dVar8;
  uStack_48 = (uint)(*(float *)(iVar6 + 0x29c) * 0.5);
  uStack_30 = CONCAT44(DAT_0145db28._4_4_,(float)DAT_0145db28);
  fVar7 = (float)DAT_0145db28;
  func_0x008abfd0();
  if (*(float *)(iVar6 + 0x29c) <= fVar7) {
    *(undefined4 *)(iVar6 + 0x2a0) = 0;
    *(undefined4 *)(iVar6 + 0x2a4) = 0;
  }
  else {
    iVar5 = 0;
    *(float *)(iVar6 + 0x2a0) = (float)uStack_40;
    *(float *)(iVar6 + 0x2a4) = (float)uStack_40;
    puStack_44 = (undefined4 *)((int)uStack_48 >> 0x1f);
    iVar4 = (int)DAT_0145db28._4_4_ +
            (-(uint)((uint)(float)DAT_0145db28 < (uint)*(float *)(iVar6 + 0x2a8)) -
            *(int *)(iVar6 + 0x2ac));
    if (((int)puStack_44 < iVar4) ||
       (((int)puStack_44 <= iVar4 &&
        (uStack_48 <= (uint)((int)(float)DAT_0145db28 - (int)*(float *)(iVar6 + 0x2a8)))))) {
      iVar4 = (int)DAT_0145db28._4_4_ +
              (-(uint)((uint)(float)DAT_0145db28 < (uint)*(float *)(iVar6 + 0x2a8)) -
              *(int *)(iVar6 + 0x2ac));
      if (((int)puStack_44 <= iVar4) &&
         (((int)puStack_44 < iVar4 ||
          (uStack_48 < (uint)((int)(float)DAT_0145db28 - (int)*(float *)(iVar6 + 0x2a8)))))) {
        iVar5 = -1;
      }
    }
    else {
      iVar5 = 1;
    }
    uStack_40 = (double)CONCAT44(DAT_0145db28._4_4_,(float)DAT_0145db28);
    uStack_60 = 0.5 / dStack_68;
    piStack_34 = (int *)0x1;
    dStack_68 = dStack_68 * 4.0;
    dVar8 = dStack_58 * dStack_58;
    do {
      dVar9 = (double)(int)((int)piStack_34 * iVar5 + (int)pppuStack_50) * dStack_68 + dVar8;
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      dVar9 = (SQRT(dVar9) * (double)iVar5 - dStack_58) * uStack_60;
      func_0x0083bc10(uVar3);
      puStack_44 = (undefined4 *)(int)dVar9;
      piStack_34 = (int *)((int)piStack_34 + 1);
      if ((int)puStack_44 < (int)uStack_48) {
        iVar5 = 1;
      }
      else if ((int)uStack_48 < (int)puStack_44) {
        iVar5 = -1;
      }
      uStack_40 = (double)CONCAT44(DAT_0145db28._4_4_,(float)DAT_0145db28);
    } while ((((int)puStack_44 - (int)(float)DAT_0145db28) + *(uint *)(iVar6 + 0x2a8) == 0 &&
              ((((int)puStack_44 >> 0x1f) - (int)DAT_0145db28._4_4_) -
              (uint)(puStack_44 < (uint)(float)DAT_0145db28)) + *(int *)(iVar6 + 0x2ac) +
              (uint)CARRY4((int)puStack_44 - (int)(float)DAT_0145db28,*(uint *)(iVar6 + 0x2a8)) == 0
             ) && ((int)piStack_34 < 3));
    uStack_30 = 0;
    func_0x0046b930(&uStack_30);
    dStack_58 = (double)CONCAT44(DAT_0145db28._4_4_,(float)DAT_0145db28);
    uStack_60._4_4_ = DAT_0145db28._4_4_;
    iVar6 = (*(int *)(iVar6 + 0x2a8) - (int)(float)DAT_0145db28) + (int)puStack_44;
    if (uStack_30._4_4_ != (int *)0x0) {
      LOCK();
      *(int *)((int)uStack_30._4_4_ + 4) = *(int *)((int)uStack_30._4_4_ + 4) + 1;
      UNLOCK();
    }
    pppuStack_50 = &ppuStack_a8;
    puStack_44 = &uStack_a4;
    ppuStack_a8 = std::_Func_impl_no_alloc<>::vftable;
    uStack_a4 = (undefined4)uStack_30;
    iStack_a0 = (int)uStack_30._4_4_;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_14._1_3_ = 0;
    pppuStack_84 = &ppuStack_a8;
    uStack_14._0_1_ = 6;
    auStack_80[4] = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[5] = 0;
    func_0x0046bc40("Creature::updateJump",0x14);
    uStack_14 = CONCAT31(uStack_14._1_3_,7);
    FUN_005e4dd0(&uStack_60,auStack_80,&ppuStack_a8,iVar6);
    piStack_34 = uStack_60._4_4_;
    if (uStack_60._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_60._4_4_[1] + -1;
      uStack_60._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*uStack_60._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar6 = piStack_34[2] + -1;
        piStack_34[2] = iVar6;
        UNLOCK();
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piStack_34 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uStack_14._0_1_ = 6;
    if (0xf < auStack_80[5]) {
      func_0x0046b1f0(auStack_80,auStack_80[0],auStack_80[5]);
    }
    auStack_80[4] = 0;
    auStack_80[5] = 0xf;
    auStack_80[0] = auStack_80[0] & 0xffffff00;
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    if (pppuStack_84 != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuStack_84)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_a8 >> 8),pppuStack_84 != &ppuStack_a8));
      (*pcVar2)();
      pppuStack_84 = (undefined ***)0x0;
    }
    uStack_14 = 0xffffffff;
    piStack_34 = uStack_30._4_4_;
    if (uStack_30._4_4_ != (int *)0x0) {
      LOCK();
      iVar6 = uStack_30._4_4_[1] + -1;
      uStack_30._4_4_[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*uStack_30._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_34 + 2;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          pcVar2 = *(code **)(*piStack_34 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0047d3a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0047d420(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *unaff_FS_OFFSET = iVar2;
  return;
}



int __cdecl
_vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x7d680  108  _vsprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_DstSize,_Format,_Locale,_ArgList);
  iVar2 = __stdio_common_vsprintf_s(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  
                    // 0x7d6c0  146  sprintf_s
  iVar1 = _vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}



// Library Function - Single Match
//  public: virtual void * __thiscall std::_Facet_base::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2019 Release

undefined4 * __thiscall ___G_Facet_base_std__UAEPAXI_Z(undefined4 *param_1,byte param_2)

{
  *param_1 = stdext::any::placeholder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



void FUN_0047d8c0(undefined4 param_1)

{
  FUN_005ee340(0,param_1);
  return;
}



void FUN_0047d8e0(undefined4 param_1)

{
  FUN_005ee340(2,param_1);
  return;
}



void FUN_0047d900(undefined4 param_1)

{
  FUN_005ee340(3,param_1);
  return;
}



undefined4 __fastcall FUN_0047dbb0(undefined4 param_1)

{
  return param_1;
}



undefined4 * __thiscall FUN_0047dbc0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eaf248;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = TiXmlDocument::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 0x12;
  if (0xf < (uint)param_1[0x17]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x17],uVar2);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x008789c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x70);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0047dc60(uint3 param_1)

{
  func_0x00484cb0(&stack0xfffffffb,&stack0x00000004,(uint)param_1);
  return;
}



undefined4 __fastcall FUN_0047dc80(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x14) - (int)*(int **)(param_1 + 0x10) >> 2 != 0) &&
     (iVar1 = **(int **)(param_1 + 0x10), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}



void __thiscall FUN_0047dca0(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaf294;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) < 2) {
    func_0x00487b80(2,uVar4);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  puVar5 = (undefined4 *)func_0x008ab47d(0x10);
  *puVar5 = stdext::any::placeholder::vftable;
  *puVar5 = stdext::any::holder<>::vftable;
  *(undefined8 *)(puVar5 + 1) = *param_2;
  puVar5[3] = *(undefined4 *)(param_2 + 1);
  puVar2 = *(undefined4 **)(iVar1 + 4);
  *(undefined4 **)(iVar1 + 4) = puVar5;
  uStack_8 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    pcVar3 = *(code **)*puVar2;
    _guard_check_icall(1);
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0047dd70(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) < 2) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4), iVar1 == 0)) {
    uStack_10 = 0xffff0000ffff;
    uStack_8 = CONCAT22(uStack_8._2_2_,0xff);
  }
  else {
    uStack_10 = *(undefined8 *)(iVar1 + 4);
    uStack_8 = *(undefined4 *)(iVar1 + 0xc);
  }
  *param_2 = uStack_10;
  *(undefined4 *)(param_2 + 1) = uStack_8;
  return;
}



int __thiscall FUN_0047ddd0(int param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eaf2f3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  func_0x0047df60(uVar2);
  piVar1 = (int *)(param_1 + 0x10);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (*piVar1 != 0) {
    func_0x004863e0(*piVar1);
    func_0x0046ac90(*piVar1,*(int *)(param_1 + 0x18) - *piVar1 >> 2);
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0047dff0(undefined3 param_1)

{
  func_0x00484cb0(&stack0xfffffffb,&stack0x00000004,CONCAT13(3,param_1));
  return;
}



undefined4 __fastcall FUN_0047e010(int param_1)

{
  int iVar1;
  
  if ((3 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}



void __thiscall FUN_0047e030(undefined3 param_1,undefined4 param_2)

{
  func_0x00484a60(&stack0xfffffffb,param_2,CONCAT13(1,param_1));
  return;
}



undefined4 FUN_0047e050(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaf3ce;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_11 = 1;
  func_0x00484b30(param_1,&uStack_11,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0047e0c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaf41f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) < 3) {
    func_0x00487b80(3,uVar4);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  puVar5 = (undefined4 *)func_0x008ab47d(0x54);
  *puVar5 = stdext::any::placeholder::vftable;
  uStack_8 = 1;
  *puVar5 = stdext::any::holder<>::vftable;
  func_0x004728b0(param_2);
  puVar2 = *(undefined4 **)(iVar1 + 8);
  *(undefined4 **)(iVar1 + 8) = puVar5;
  uStack_8 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    pcVar3 = *(code **)*puVar2;
    _guard_check_icall(1);
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_0047e180(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 auStack_84 [5];
  uint uStack_70;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eaf4bc;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_8 = 1;
  if (((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) < 3) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8), iVar1 == 0)) {
    uVar3 = func_0x0058ac20(uVar2);
    uStack_8 = 3;
    uVar2 = 4;
  }
  else {
    uVar3 = func_0x004728b0(iVar1 + 4);
    uStack_8 = 2;
    uVar2 = 2;
  }
  uStack_18 = uVar2;
  func_0x004728b0(uVar3);
  uVar4 = uVar2 | 8;
  if ((uVar2 & 4) != 0) {
    uVar4 = uVar2 & 0xfffffffb | 8;
    uStack_8 = 2;
    if (0xf < uStack_20) {
      uStack_18 = uVar4;
      func_0x0046b1f0(auStack_34,auStack_34[0],uStack_20);
    }
    uStack_24 = 0;
    uStack_20 = 0xf;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
  }
  if ((uVar4 & 2) != 0) {
    uStack_18 = uVar4 & 0xfffffffd;
    uStack_8 = 1;
    if (0xf < uStack_70) {
      func_0x0046b1f0(auStack_84,auStack_84[0],uStack_70);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



int __thiscall FUN_0047e2c0(int param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eaf500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)(param_1 + 0x10);
  uStack_8 = 0;
  if (*piVar1 != 0) {
    func_0x004863e0(*piVar1,uVar2);
    func_0x0046ac90(*piVar1,*(int *)(param_1 + 0x18) - *piVar1 >> 2);
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0047e370(int *param_1)

{
  if (*param_1 != param_1[1]) {
    func_0x00485920(*param_1);
    param_1[1] = *param_1;
  }
  return;
}



undefined1 __fastcall FUN_0047e390(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



void __thiscall FUN_0047fba0(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 ****ppppuVar9;
  int *unaff_FS_OFFSET;
  uint auStack_a8 [4];
  undefined4 uStack_98;
  uint uStack_94;
  uint auStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  int *piStack_78;
  int iStack_74;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 *puStack_58;
  undefined4 ***pppuStack_54;
  undefined8 uStack_50;
  int iStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eaf902;
  iStack_1c = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puStack_58 = param_3;
  piStack_78 = param_2;
  uStack_3c = 0;
  iStack_74 = param_1;
  uStack_24 = uVar3;
  FUN_0047dd70(&iStack_30);
  if ((*(int *)(param_1 + 0x14) - (int)*(int **)(param_1 + 0x10) >> 2 == 0) ||
     (iVar7 = **(int **)(param_1 + 0x10), iVar7 == 0)) {
    piStack_34 = (int *)0x0;
LAB_0047fc29:
    if ((((*param_2 < iStack_30 - (int)piStack_34) || (iStack_30 + (int)piStack_34 < *param_2)) ||
        (param_2[1] < iStack_2c - (int)piStack_34)) || (iStack_2c + (int)piStack_34 < param_2[1])) {
      uVar5 = func_0x00484f70(uVar3);
      iStack_14 = 0;
      uVar6 = func_0x00484f70();
      iStack_14._0_1_ = 1;
      uStack_44 = 0;
      pppuStack_54 = (undefined4 ****)0x0;
      uStack_50 = 0;
      iStack_48 = 0;
      piStack_40 = (int *)0x0;
      func_0x0046bc40("cannot place creature at %s (spawn\'s center position: %s, spawn radius: %d) (increment radius)"
                      ,0x5e);
      iStack_14._0_1_ = 3;
      ppppuVar9 = &pppuStack_54;
      if (0xf < piStack_40) {
        ppppuVar9 = (undefined4 ****)pppuStack_54;
      }
      iVar7 = func_0x00488360(ppppuVar9,uVar6,uVar5,&piStack_34);
      iVar8 = iVar7 + 1;
      if (SCARRY4(iVar7,1)) {
        iVar8 = -1;
      }
      func_0x00469c80(iVar8,0);
      ppppuVar9 = &pppuStack_54;
      if (0xf < piStack_40) {
        ppppuVar9 = (undefined4 ****)pppuStack_54;
      }
      uStack_3c = 1;
      uVar5 = func_0x00488360(ppppuVar9,uVar6,uVar5,&piStack_34);
      func_0x004698c0(uVar5,0);
      FUN_005ee340(2,auStack_70);
      uStack_3c = 0;
      iStack_14._0_1_ = 2;
      if (0xf < uStack_5c) {
        func_0x0046b1f0(auStack_70,auStack_70[0],uStack_5c);
      }
      uStack_60 = 0;
      uStack_5c = 0xf;
      auStack_70[0] = auStack_70[0] & 0xffffff00;
      iStack_14._0_1_ = 1;
      if (0xf < piStack_40) {
        func_0x0046b1f0(&pppuStack_54,pppuStack_54,piStack_40);
      }
      uStack_44 = 0;
      piStack_40 = (int *)&DAT_0000000f;
      pppuStack_54 = (undefined4 ***)((uint)pppuStack_54 & 0xffffff00);
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      if (0xf < uStack_7c) {
        func_0x0046b1f0(auStack_90,auStack_90[0],uStack_7c);
      }
      uStack_80 = 0;
      uStack_7c = 0xf;
      auStack_90[0] = auStack_90[0] & 0xffffff00;
      iStack_14 = 0xffffffff;
      if (0xf < uStack_94) {
        func_0x0046b1f0(auStack_a8,auStack_a8[0],uStack_94);
      }
      uStack_98 = 0;
      uStack_94 = 0xf;
      auStack_a8[0] = auStack_a8[0] & 0xffffff00;
      goto LAB_0047ffab;
    }
  }
  else {
    piStack_34 = *(int **)(iVar7 + 4);
    if (piStack_34 != (int *)0xffffffff) goto LAB_0047fc29;
  }
  puVar4 = (undefined4 *)FUN_00480260(&iStack_2c);
  uStack_38 = *puVar4;
  piStack_34 = (int *)puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  iStack_14._0_1_ = 5;
  iStack_14._1_3_ = 0;
  FUN_00571480(&uStack_38,param_2,4);
  iStack_14 = CONCAT31(iStack_14._1_3_,4);
  if (piStack_34 != (int *)0x0) {
    LOCK();
    iVar7 = piStack_34[1] + -1;
    piStack_34[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar2 = *(code **)*piStack_34;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar7 = piStack_34[2] + -1;
      piStack_34[2] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar2 = *(code **)(*piStack_34 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_14 = 0xffffffff;
  piStack_34 = piStack_28;
  if (piStack_28 != (int *)0x0) {
    LOCK();
    iVar7 = piStack_28[1] + -1;
    piStack_28[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar2 = *(code **)*piStack_28;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar7 = piStack_34[2] + -1;
      piStack_34[2] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar2 = *(code **)(*piStack_34 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_50 = *(undefined8 *)piStack_78;
  iStack_48 = piStack_78[2];
  if (puStack_58[1] != 0) {
    LOCK();
    piVar1 = (int *)(puStack_58[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_44 = *puStack_58;
  piStack_40 = (int *)puStack_58[1];
  iStack_14 = 6;
  uStack_3c = 2;
  func_0x00488430(&iStack_2c,&uStack_50);
  uStack_3c = 0;
  iStack_14 = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    LOCK();
    iVar7 = piStack_40[1] + -1;
    piStack_40[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar2 = *(code **)*piStack_40;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_40 + 2;
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        pcVar2 = *(code **)(*piStack_40 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
LAB_0047ffab:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00480050(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_c [8];
  
  iVar3 = func_0x0048ca40(auStack_c,param_2,
                          (*param_2 * 0x2000 + param_2[1]) * 0x10 + (int)(short)param_2[2]);
  piVar4 = *(int **)(iVar3 + 4);
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x20);
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar4 != piVar2) {
    piVar1 = (int *)(*(int *)(param_1 + 0x28) +
                    ((piVar4[2] * 0x2000 + piVar4[3]) * 0x10 + (int)(short)piVar4[4] &
                    *(uint *)(param_1 + 0x34)) * 8);
    if ((int *)piVar1[1] == piVar4) {
      if ((int *)*piVar1 == piVar4) {
        *piVar1 = (int)piVar2;
        piVar1[1] = (int)piVar2;
      }
      else {
        piVar1[1] = piVar4[1];
      }
    }
    else if ((int *)*piVar1 == piVar4) {
      *piVar1 = *piVar4;
    }
    iVar3 = *piVar4;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    *(int *)piVar4[1] = iVar3;
    *(int *)(iVar3 + 4) = piVar4[1];
    func_0x00488dd0();
  }
  return;
}



void __thiscall FUN_004800f0(int param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eaf996;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_8 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x20);
  uVar10 = 1;
  uStack_14 = uVar8;
  puVar9 = param_2;
  for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
    if (puVar4[6] != 0) {
      LOCK();
      piVar1 = (int *)(puVar4[6] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uStack_1c = puVar4[5];
    piStack_18 = (int *)puVar4[6];
    uStack_8 = 2;
    puVar5 = *(undefined4 **)((int)param_2 + 4);
    if (puVar5 == *(undefined4 **)(param_2 + 1)) {
      func_0x00488a10(puVar5,&uStack_1c,uVar8);
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      if (piStack_18 != (int *)0x0) {
        LOCK();
        piStack_18[1] = piStack_18[1] + 1;
        UNLOCK();
      }
      *puVar5 = uStack_1c;
      puVar5[1] = piStack_18;
      *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
    }
    piVar1 = piStack_18;
    uStack_8 = 0;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar7 = piStack_18[1] + -1;
      piStack_18[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar6 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar7 = *piVar2 + -1;
        *piVar2 = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar6 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar9,uVar10);
  return;
}



void __thiscall FUN_00480260(int param_1,int *param_2)

{
  int iVar1;
  undefined4 ***pppuVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_88 [52];
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 **appuStack_30 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eaf9f9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  piStack_38 = param_2;
  uStack_34 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  func_0x00485010(uStack_18);
  iStack_8 = 0;
  uStack_34 = 1;
  FUN_0047e050(appuStack_30);
  iStack_8 = 1;
  func_0x0083c9e0();
  func_0x0083ca70();
  func_0x0083cb20();
  iVar1 = *param_2;
  func_0x004672c0(appuStack_30);
  if ((undefined4 ***)(iVar1 + 0x34) != appuStack_30) {
    pppuVar2 = appuStack_30;
    if (0xf < uStack_1c) {
      pppuVar2 = (undefined4 ***)appuStack_30[0];
    }
    func_0x0046a660(pppuVar2,uStack_20);
  }
  if (((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) < 5) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10), iVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 4);
  }
  *(undefined4 *)(*param_2 + 0x50) = uVar3;
  uVar3 = FUN_0047e180(auStack_88);
  iStack_8._0_1_ = 2;
  FUN_004774e0(uVar3);
  iStack_8._0_1_ = 1;
  if (0xf < uStack_40) {
    func_0x0046b1f0(auStack_54,auStack_54[0],uStack_40);
  }
  uStack_44 = 0;
  uStack_40 = 0xf;
  auStack_54[0] = auStack_54[0] & 0xffffff00;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(appuStack_30,appuStack_30[0],uStack_1c);
  }
  uStack_20 = 0;
  uStack_1c = 0xf;
  appuStack_30[0] = (undefined4 **)((uint)appuStack_30[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004805d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_30;
  code *pcStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  code *pcStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eafabd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  uStack_14 = uVar5;
  for (puVar3 = (undefined4 *)*puVar2; iStack_30 = param_1, puVar3 != puVar2;
      puVar3 = (undefined4 *)*puVar3) {
    uStack_20 = puVar3[4];
    uStack_28 = *(undefined8 *)(puVar3 + 2);
    if (puVar3[6] != 0) {
      LOCK();
      piVar1 = (int *)(puVar3[6] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    pcStack_2c = (code *)puVar3[5];
    piVar1 = (int *)puVar3[6];
    uStack_8 = 1;
    pcStack_1c = pcStack_2c;
    piStack_18 = piVar1;
    if (*(int *)(pcStack_2c + 0x24) != 0) {
      func_0x00486330(uVar5);
      *(undefined4 *)*(undefined4 *)(pcStack_2c + 0x20) = *(undefined4 *)(pcStack_2c + 0x20);
      *(int *)(*(int *)(pcStack_2c + 0x20) + 4) = *(int *)(pcStack_2c + 0x20);
      *(undefined4 *)(pcStack_2c + 0x24) = 0;
      pcStack_2c = *(code **)(pcStack_2c + 0x20);
      func_0x0046c050(&pcStack_2c);
    }
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcStack_2c = *(code **)*piVar1;
        _guard_check_icall();
        (*pcStack_2c)();
        LOCK();
        iVar4 = piVar1[2] + -1;
        piVar1[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcStack_2c = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcStack_2c)();
        }
      }
    }
    param_1 = iStack_30;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x00486330(uVar5);
    *(undefined4 *)*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = 0;
    iStack_30 = *(int *)(param_1 + 0x10);
    func_0x0046c050(&iStack_30);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_004807c0(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint auStack_144 [4];
  undefined4 uStack_134;
  uint uStack_130;
  uint auStack_12c [4];
  undefined4 uStack_11c;
  uint uStack_118;
  uint auStack_114 [4];
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  char cStack_b1;
  undefined **appuStack_b0 [16];
  char cStack_70;
  uint auStack_68 [4];
  undefined4 uStack_58;
  uint uStack_54;
  uint auStack_3c [4];
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eafbdc;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puStack_c0 = param_1;
  uStack_b8 = 0;
  uStack_24 = uVar4;
  memset(appuStack_b0,0,0x70);
  func_0x008794e0(uVar4);
  uStack_14 = 0;
  puVar5 = (undefined4 *)func_0x00611cf0(&uStack_e4,param_1);
  uStack_14._0_1_ = 1;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  FUN_0087b0c0(puVar5,0,0);
  uStack_14 = (uint)uStack_14._1_3_ << 8;
  if (0xf < uStack_d4._4_4_) {
    func_0x0046b1f0(&uStack_e4,uStack_e4,uStack_d4._4_4_);
  }
  uStack_d4 = 0xf00000000;
  uStack_e4 = uStack_e4 & 0xffffff00;
  if (cStack_70 == '\0') {
    param_1 = (undefined4 *)func_0x0047d9e0();
    if (param_1 != (undefined4 *)0x0) {
      piVar10 = param_1 + 8;
      if (0xf < (uint)param_1[0xd]) {
        piVar10 = (int *)*piVar10;
      }
      cVar3 = func_0x0046cf20(piVar10,param_1[0xc],"monsters",8);
      if (cVar3 != '\0') {
        iStack_c8 = func_0x0047d9e0();
        do {
          if (iStack_c8 == 0) {
            func_0x00878a70();
            *(undefined1 *)(iStack_bc + 0x2c) = 1;
            appuStack_b0[0] = TiXmlDocument::vftable;
            uStack_14 = 0xf;
            if (0xf < uStack_54) {
              func_0x0046b1f0(auStack_68,auStack_68[0],uStack_54);
            }
            uStack_58 = 0;
            uStack_54 = 0xf;
            auStack_68[0] = auStack_68[0] & 0xffffff00;
            uStack_14 = 0xffffffff;
            func_0x008789c0();
            *unaff_FS_OFFSET = iStack_1c;
            FUN_008ab370();
            return;
          }
          uStack_ec = 0;
          uStack_e8 = 0;
          uStack_fc = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          func_0x0046bc40(&DAT_0113c44c,4);
          uStack_14._0_1_ = 5;
          uStack_cc = func_0x00878d80(auStack_12c,&uStack_fc);
          uStack_14 = CONCAT31(uStack_14._1_3_,6);
          puStack_c4 = puStack_c0;
          if (0xf < (uint)puStack_c0[5]) {
            puStack_c4 = (undefined4 *)*puStack_c0;
          }
          if (puStack_c0[4] == 0) {
LAB_004809a0:
            iVar7 = -1;
          }
          else {
            iVar6 = puStack_c0[4] + -1;
            iVar7 = -1;
            if (iVar6 != -1) {
              iVar7 = iVar6;
            }
            iVar6 = iVar7 + 1 + (int)puStack_c4;
            iVar7 = func_0x00e72250(puStack_c4,iVar6,0x2f);
            if (iVar7 == iVar6) goto LAB_004809a0;
            iVar7 = iVar7 - (int)puStack_c4;
          }
          puVar8 = (uint *)func_0x00482f60(auStack_144,0,iVar7);
          uStack_14._0_1_ = 8;
          func_0x00469a20(0x2f);
          uStack_e4 = *puVar8;
          uStack_e0 = puVar8[1];
          uStack_dc = puVar8[2];
          uStack_d8 = puVar8[3];
          uStack_d4 = *(undefined8 *)(puVar8 + 4);
          puVar8[4] = 0;
          puVar8[5] = 0xf;
          *(undefined1 *)puVar8 = 0;
          uStack_b8 = 1;
          uStack_14._0_1_ = 9;
          func_0x0046c7c0(uStack_cc,&uStack_e4,uStack_cc);
          uStack_b8 = 2;
          uStack_14._0_1_ = 10;
          uVar2 = (undefined1)uStack_14;
          uStack_14._0_1_ = 10;
          if (0xf < uStack_d4._4_4_) {
            uVar11 = uStack_d4._4_4_ + 1;
            uVar4 = uStack_e4;
            if (0xfff < uVar11) {
              uVar4 = *(uint *)(uStack_e4 - 4);
              uVar11 = uStack_d4._4_4_ + 0x24;
              if (0x1f < (uStack_e4 - uVar4) - 4) {
                uStack_14._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            func_0x008ab812(uVar4,uVar11);
          }
          uStack_d4 = 0xf00000000;
          uStack_e4 = uStack_e4 & 0xffffff00;
          uStack_14._0_1_ = 0xb;
          if (0xf < uStack_130) {
            func_0x0046b1f0(auStack_144,auStack_144[0],uStack_130);
          }
          uStack_134 = 0;
          uStack_130 = 0xf;
          auStack_144[0] = auStack_144[0] & 0xffffff00;
          uStack_14._0_1_ = 0xc;
          if (0xf < uStack_118) {
            func_0x0046b1f0(auStack_12c,auStack_12c[0],uStack_118);
          }
          uStack_11c = 0;
          uStack_118 = 0xf;
          auStack_12c[0] = auStack_12c[0] & 0xffffff00;
          uStack_14._0_1_ = 0xd;
          if (0xf < uStack_e8) {
            func_0x0046b1f0(&uStack_fc,uStack_fc,uStack_e8);
          }
          uStack_ec = 0;
          uStack_e8 = 0xf;
          uStack_fc = uStack_fc & 0xffffff00;
          puVar9 = (undefined4 *)func_0x00482f60(auStack_114,iStack_2c + -4,0xffffffff);
          uStack_14._0_1_ = 0xe;
          puVar5 = puVar9 + 4;
          if (0xf < (uint)puVar9[5]) {
            puVar9 = (undefined4 *)*puVar9;
          }
          cStack_b1 = func_0x0046cf20(puVar9,*puVar5,&DAT_0113c490,4);
          uStack_14 = CONCAT31(uStack_14._1_3_,0xd);
          if (0xf < uStack_100) {
            func_0x0046b1f0(auStack_114,auStack_114[0],uStack_100);
          }
          uStack_104 = 0;
          uStack_100 = 0xf;
          auStack_114[0] = auStack_114[0] & 0xffffff00;
          if (cStack_b1 == '\0') {
            func_0x0046a880(&DAT_0113c490,4);
          }
          FUN_00480d40(auStack_3c);
          uStack_b8 = 0;
          uStack_14 = uStack_14 & 0xffffff00;
          if (0xf < uStack_28) {
            func_0x0046b1f0(auStack_3c,auStack_3c[0],uStack_28);
          }
          iStack_2c = 0;
          uStack_28 = 0xf;
          auStack_3c[0] = auStack_3c[0] & 0xffffff00;
          iStack_c8 = func_0x0047d990();
        } while( true );
      }
    }
    func_0x00469d30("malformed monsters xml file");
    uStack_14 = CONCAT31(uStack_14._1_3_,4);
    func_0x0047d860();
  }
  iStack_bc = func_0x0047dba0();
  func_0x00469d30("cannot open monsters file \'%s\': \'%s\'");
  uStack_14._0_1_ = 2;
  func_0x004852c0(param_1,&iStack_bc);
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00480d40(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined4 auStack_2c [5];
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eadb2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar2 = func_0x00611cf0(auStack_2c,param_1,uVar1);
  uStack_8 = 0;
  func_0x00481850(uVar2);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00480dd0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 *****pppppuVar3;
  undefined4 uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint auStack_80 [4];
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  char cStack_45;
  int *apiStack_44 [2];
  undefined4 ****appppuStack_3c [4];
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eafc5e;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_4c = 0;
  func_0x00469da0(param_1,uStack_24);
  uStack_14 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  func_0x0046bc40(&DAT_0113c2ec,1);
  uStack_14._0_1_ = 1;
  cStack_45 = func_0x0083d4b0(uStack_50);
  uStack_14._0_1_ = 0;
  if (0xf < uStack_54) {
    func_0x0046b1f0(&uStack_68,uStack_68,uStack_54);
  }
  uStack_58 = 0;
  uStack_54 = 0xf;
  uStack_68 = uStack_68 & 0xffffff00;
  if (cStack_45 == '\0') {
    func_0x0046a880(&DAT_0113c2ec,1);
  }
  cVar2 = FUN_005fc430(appppuStack_3c);
  if (cVar2 != '\0') {
    FUN_005fd490(apiStack_44,appppuStack_3c,0,0);
    uStack_14 = (uint)uStack_14._1_3_ << 8;
    param_1 = (int *)*apiStack_44[0];
    while( true ) {
      if (param_1 == apiStack_44[0]) {
        uStack_14 = uStack_14 & 0xffffff00;
        func_0x00482c40();
        uStack_14 = 0xffffffff;
        if (0xf < uStack_28) {
          func_0x0046b1f0(appppuStack_3c,appppuStack_3c[0],uStack_28);
        }
        iStack_2c = 0;
        uStack_28 = 0xf;
        appppuStack_3c[0] = (undefined4 ****)((uint)appppuStack_3c[0] & 0xffffff00);
        *unaff_FS_OFFSET = iStack_1c;
        FUN_008ab370();
        return;
      }
      piVar5 = param_1 + 2;
      uStack_14._1_3_ = (uint3)(uStack_14 >> 8);
      uStack_14._0_1_ = 5;
      if (0x7fffffffU - iStack_2c < (uint)param_1[6]) break;
      pppppuVar3 = appppuStack_3c;
      if (0xf < uStack_28) {
        pppppuVar3 = (undefined4 *****)appppuStack_3c[0];
      }
      if (0xf < (uint)param_1[7]) {
        piVar5 = (int *)*piVar5;
      }
      func_0x00487d10(uStack_50,appppuStack_3c,pppppuVar3,iStack_2c,piVar5,param_1[6]);
      uStack_4c = uStack_4c | 1;
      uVar4 = func_0x00611cf0(auStack_80,&uStack_68);
      uStack_14._0_1_ = 6;
      func_0x00481850(uVar4);
      uStack_14._0_1_ = 5;
      if (0xf < uStack_6c) {
        func_0x0046b1f0(auStack_80,auStack_80[0],uStack_6c);
      }
      uStack_4c = uStack_4c & 0xfffffffe;
      uStack_70 = 0;
      uStack_6c = 0xf;
      auStack_80[0] = auStack_80[0] & 0xffffff00;
      uStack_14 = CONCAT31(uStack_14._1_3_,4);
      if (0xf < uStack_54) {
        func_0x0046b1f0(&uStack_68,uStack_68,uStack_54);
      }
      param_1 = (int *)*param_1;
      uStack_58 = 0;
      uStack_54 = 0xf;
      uStack_68 = uStack_68 & 0xffffff00;
    }
    func_0x00463570();
  }
  func_0x00469d30("NPCs folder \'%s\' was not found.");
  uStack_14._0_1_ = 2;
  func_0x00484eb0(param_1);
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00481050(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  uint uStack_f8;
  undefined1 auStack_ec [20];
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  int iStack_c4;
  uint auStack_c0 [6];
  undefined1 auStack_a8 [64];
  char cStack_68;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_24 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eafd16;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_f8 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_f8;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_c8 = param_2;
  iStack_c4 = param_1;
  uStack_2c = uStack_f8;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    auStack_c0[2] = 0;
    auStack_c0[3] = 0;
    auStack_c0[4] = 0;
    auStack_c0[5] = 0;
    puStack_24 = &stack0xfffffffc;
    puStack_20 = (undefined1 *)&uStack_f8;
    func_0x0046bc40("creatures aren\'t loaded yet to load spawns.",0x2b);
    uStack_14 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2d) == '\0') {
      uStack_14 = 2;
      memset(auStack_a8,0,0x70);
      func_0x008794e0();
      uStack_14._0_1_ = 3;
      puVar3 = (undefined4 *)func_0x00611cf0(auStack_c0,param_2);
      uStack_14._0_1_ = 4;
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_0087b0c0(puVar3,0,0);
      uStack_14._0_1_ = 3;
      FUN_00469ba0();
      if (cStack_68 != '\0') {
        iStack_c4 = func_0x0047dba0();
        func_0x00469d30("cannot load spawns xml file \'%s: \'%s\'");
        uStack_14._0_1_ = 5;
        func_0x004852c0(param_2,&iStack_c4);
        uStack_14._0_1_ = 6;
        func_0x0047d860();
LAB_00481436:
        func_0x00469d30("invalid spawn node");
        uStack_14._0_1_ = 8;
        func_0x0047d860();
LAB_00481455:
        func_0x00469d30("malformed spawns file");
        uStack_14 = CONCAT31(uStack_14._1_3_,7);
        func_0x0047d860();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = func_0x0047d9e0();
      if (iVar4 == 0) goto LAB_00481455;
      cVar2 = func_0x00484e70(iVar4 + 0x20,"spawns");
      if (cVar2 != '\0') goto LAB_00481455;
      iVar4 = func_0x0047d9e0();
      while (iVar4 != 0) {
        cVar2 = func_0x00484e70(iVar4 + 0x20,"spawn");
        if (cVar2 != '\0') goto LAB_00481436;
        uStack_34 = 0;
        func_0x00485380();
        uStack_14._0_1_ = 9;
        func_0x0047e3a0(iVar4);
        puVar6 = &uStack_34;
        FUN_0047dd70(auStack_d8);
        uVar5 = func_0x004855e0(puVar6);
        uStack_14._0_1_ = 10;
        func_0x00488430(auStack_ec,uVar5);
        uStack_14._0_1_ = 9;
        func_0x0047ffd0();
        uStack_14._0_1_ = 3;
        FUN_00468340();
        iVar4 = func_0x0047d990();
        param_1 = iStack_c4;
      }
      func_0x00878a70();
      *(undefined1 *)(param_1 + 0x2d) = 1;
      uStack_14 = CONCAT31(uStack_14._1_3_,2);
      func_0x0047db20();
      uStack_14 = 0xffffffff;
      goto LAB_004813d0;
    }
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    auStack_c0[2] = 0;
    auStack_c0[3] = 0;
    auStack_c0[4] = 0;
    auStack_c0[5] = 0;
    puStack_24 = &stack0xfffffffc;
    puStack_20 = (undefined1 *)&uStack_f8;
    func_0x0046bc40("attempt to reload spawns.",0x19);
    uStack_14 = 1;
  }
  FUN_005ee340(2,auStack_c0);
  uStack_14 = 0xffffffff;
  if (0xf < auStack_c0[5]) {
    func_0x0046b1f0(auStack_c0,auStack_c0[0],auStack_c0[5]);
  }
  auStack_c0[4] = 0;
  auStack_c0[5] = 0xf;
  auStack_c0[0] = auStack_c0[0] & 0xffffff00;
LAB_004813d0:
  *unaff_FS_OFFSET = iStack_1c;
  uStack_f8 = 0x4813e7;
  FUN_008ab370();
  return;
}



undefined * Catch_004812eb(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xbc) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0xb4) = uVar2;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  func_0x0046bc40("Failed to load \'%s\': %s",0x17);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0xb8),unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (0xf < *(uint *)(unaff_EBP + -0x9c)) {
    func_0x0046b1f0(unaff_EBP + -0xb0,*(undefined4 *)(unaff_EBP + -0xb0),
                    *(uint *)(unaff_EBP + -0x9c));
  }
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  return &DAT_004813c6;
}



void __thiscall FUN_00481480(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  uint uStack_f8;
  undefined1 auStack_e8 [24];
  undefined4 uStack_d0;
  void *pvStack_cc;
  void *pvStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  char cStack_b9;
  undefined1 auStack_b8 [96];
  undefined4 uStack_58;
  undefined1 auStack_48 [24];
  int *piStack_30;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00eafe09;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_f8 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_f8;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_c4 = param_2;
  uStack_d0 = param_2;
  uStack_c0 = 0;
  iStack_14 = 0;
  uStack_2c = uStack_f8;
  memset(auStack_b8,0,0x70);
  func_0x008794e0();
  iStack_14._0_1_ = 1;
  uStack_58 = 2;
  pvStack_cc = (void *)func_0x008ab47d(0x88);
  iStack_14._0_1_ = 2;
  memset(pvStack_cc,0,0x88);
  uVar3 = func_0x00879d90();
  iStack_14._0_1_ = 1;
  func_0x00878ac0(uVar3);
  pvStack_c8 = (void *)func_0x008ab47d(0x8c);
  iStack_14._0_1_ = 3;
  memset(pvStack_c8,0,0x8c);
  func_0x00469d30("spawns");
  iStack_14 = CONCAT31(iStack_14._1_3_,4);
  uStack_c0 = 1;
  uVar3 = func_0x00878be0(auStack_48);
  iStack_14 = 1;
  uStack_c0 = 0;
  pvStack_cc = (void *)uVar3;
  FUN_00469ba0();
  func_0x00878ac0(uVar3);
  piVar1 = *(int **)(param_1 + 0x10);
  piVar5 = (int *)*piVar1;
  piStack_30 = piVar1;
  while (uVar3 = uStack_c4, piVar5 != piVar1) {
    func_0x00480740(piVar5 + 2);
    iStack_14._0_1_ = 6;
    pvStack_c8 = (void *)func_0x008ab47d(0x8c);
    iStack_14._0_1_ = 7;
    memset(pvStack_c8,0,0x8c);
    func_0x00469d30("spawn");
    iStack_14 = CONCAT31(iStack_14._1_3_,8);
    uStack_c0 = uStack_c0 | 2;
    piStack_30 = (int *)func_0x00878be0(auStack_e8);
    iStack_14 = 6;
    if ((uStack_c0 & 2) != 0) {
      uStack_c0 = uStack_c0 & 0xfffffffd;
      FUN_00469ba0();
    }
    func_0x0047f150(piStack_30);
    func_0x00878ac0(piStack_30);
    iStack_14 = CONCAT31(iStack_14._1_3_,1);
    func_0x0047ffd0();
    piVar5 = (int *)*piVar5;
    piStack_30 = piVar5;
  }
  puVar4 = (undefined4 *)func_0x00484950(auStack_e8,&DAT_0113c58c,uStack_c4);
  iStack_14._0_1_ = 10;
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  cStack_b9 = func_0x008795a0(puVar4);
  iStack_14._0_1_ = 1;
  FUN_00469ba0();
  if (cStack_b9 != '\0') {
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    func_0x0047db20();
    iStack_14 = 0xffffffff;
    *unaff_FS_OFFSET = iStack_1c;
    FUN_008ab370();
    return;
  }
  uStack_c4 = func_0x0047dba0();
  func_0x00469d30("failed to save spawns XML %s: %s");
  iStack_14._0_1_ = 0xb;
  func_0x004852c0(uVar3,&uStack_c4);
  iStack_14 = CONCAT31(iStack_14._1_3_,0xc);
  func_0x0047d860();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



undefined * Catch_0048171f(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xdc) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0xb4) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  func_0x0046bc40("Failed to save \'%s\': %s",0x17);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0xc0),unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(unaff_EBP + -0x38,*(undefined4 *)(unaff_EBP + -0x38),
                    *(uint *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x38) = 0;
  return &DAT_004817d9;
}



undefined4 * __thiscall FUN_00482150(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *****pppppuVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 *****pppppuVar5;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 ****ppppuStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 ****appppuStack_48 [4];
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 ****ppppuStack_30;
  undefined4 *puStack_2c;
  uint uStack_28;
  char cStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00eaffb9;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_28 = 0;
  uStack_14 = 0;
  puStack_2c = param_1;
  func_0x0083c9e0(uVar2);
  func_0x0083ca70();
  func_0x0083cb20();
  puVar1 = (undefined4 *)param_1[1];
  ppppuStack_30 = appppuStack_48;
  param_1 = (undefined4 *)*param_1;
  func_0x00469da0(extraout_ECX);
  uStack_14 = uStack_14 & 0xffffff00;
  for (; param_1 != puVar1; param_1 = param_1 + 2) {
    uStack_14._1_3_ = (uint3)(uStack_14 >> 8);
    uStack_14._0_1_ = 4;
    cStack_21 = '\x01';
    func_0x00484b30(&ppppuStack_60,&cStack_21);
    uStack_28 = uStack_28 | 1;
    pppppuVar5 = appppuStack_48;
    if (0xf < uStack_34) {
      pppppuVar5 = (undefined4 *****)appppuStack_48[0];
    }
    pppppuVar3 = &ppppuStack_60;
    if (0xf < uStack_4c) {
      pppppuVar3 = (undefined4 *****)ppppuStack_60;
    }
    cStack_21 = func_0x0046cf20(pppppuVar3,uStack_50,pppppuVar5,uStack_38);
    uStack_28 = uStack_28 & 0xfffffffe;
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    if (0xf < uStack_4c) {
      func_0x0046b1f0(&ppppuStack_60,ppppuStack_60,uStack_4c);
    }
    uStack_50 = 0;
    uStack_4c = 0xf;
    ppppuStack_60 = (undefined4 ****)((uint)ppppuStack_60 & 0xffffff00);
    if (cStack_21 != '\0') break;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < uStack_34) {
    func_0x0046b1f0(appppuStack_48,appppuStack_48[0],uStack_34);
  }
  puVar1 = puStack_2c;
  uStack_38 = 0;
  uStack_34 = 0xf;
  appppuStack_48[0] = (undefined4 ****)((uint)appppuStack_48[0] & 0xffffff00);
  if (param_1 == (undefined4 *)puStack_2c[1]) {
    uStack_50 = 0;
    uStack_4c = 0;
    ppppuStack_60 = (undefined4 ****)0x0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0046bc40("could not find creature with name: %s",0x25);
    uStack_14._0_1_ = 6;
    uVar4 = func_0x00484eb0(&param_2);
    uStack_14._0_1_ = 7;
    FUN_005ee340(2,uVar4);
    uStack_14._0_1_ = 6;
    if (0xf < uStack_34) {
      func_0x0046b1f0(appppuStack_48,appppuStack_48[0],uStack_34);
    }
    uStack_38 = 0;
    uStack_34 = 0xf;
    appppuStack_48[0] = (undefined4 ****)((uint)appppuStack_48[0] & 0xffffff00);
    uStack_14 = (uint)uStack_14._1_3_ << 8;
    if (0xf < uStack_4c) {
      func_0x0046b1f0(&ppppuStack_60,ppppuStack_60,uStack_4c);
    }
    uStack_50 = 0;
    param_1 = puVar1 + 0xc;
    uStack_4c = 0xf;
    ppppuStack_60 = (undefined4 ****)((uint)ppppuStack_60 & 0xffffff00);
  }
  uStack_14 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return param_1;
}



void __thiscall FUN_004823a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  uint auStack_40 [8];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eafff5;
  iStack_1c = *unaff_FS_OFFSET;
  auStack_40[7] = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_40[6] = 0;
  func_0x00485850(*param_1,param_1[1],param_2,auStack_40[7]);
  if (auStack_40[6] == param_1[1]) {
    auStack_40[4] = 0;
    auStack_40[5] = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    func_0x0046bc40("could not find creature with looktype: %d",0x29);
    iStack_14 = 0;
    uVar1 = func_0x00485670(&param_2);
    iStack_14._0_1_ = 1;
    FUN_005ee340(2,uVar1);
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < uStack_44) {
      func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
    }
    uStack_48 = 0;
    uStack_44 = 0xf;
    auStack_58[0] = auStack_58[0] & 0xffffff00;
    iStack_14 = 0xffffffff;
    if (0xf < auStack_40[5]) {
      func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
    }
    auStack_40[4] = 0;
    auStack_40[5] = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined4 * FUN_004824e0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [8];
  undefined4 *puStack_74;
  undefined4 auStack_70 [5];
  uint uStack_5c;
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  uint auStack_40 [8];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb0056;
  iStack_1c = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puStack_74 = param_1;
  auStack_40[6] = 0;
  iVar3 = func_0x0048ca40(auStack_7c,param_2,
                          (*param_2 * 0x2000 + param_2[1]) * 0x10 + (int)(short)param_2[2],uVar2);
  iVar3 = *(int *)(iVar3 + 4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(auStack_40[7] + 0x10);
  }
  if (iVar3 == *(int *)(auStack_40[7] + 0x10)) {
    uVar4 = func_0x00484f70();
    iStack_14 = 1;
    auStack_40[4] = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 0;
    auStack_40[5] = 0;
    func_0x0046bc40("failed to find spawn at center %s",0x21);
    iStack_14._0_1_ = 2;
    uVar4 = func_0x00484eb0(uVar4);
    iStack_14._0_1_ = 3;
    FUN_005ee340(0,uVar4);
    iStack_14._0_1_ = 2;
    if (0xf < uStack_44) {
      func_0x0046b1f0(auStack_58,auStack_58[0],uStack_44);
    }
    uStack_48 = 0;
    uStack_44 = 0xf;
    auStack_58[0] = auStack_58[0] & 0xffffff00;
    iStack_14._0_1_ = 1;
    if (0xf < auStack_40[5]) {
      func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
    }
    auStack_40[4] = 0;
    auStack_40[5] = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < uStack_5c) {
      func_0x0046b1f0(auStack_70,auStack_70[0],uStack_5c);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (*(int *)(iVar3 + 0x18) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(iVar3 + 0x18) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_1 = *(undefined4 *)(iVar3 + 0x14);
    param_1[1] = *(undefined4 *)(iVar3 + 0x18);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return param_1;
}



undefined4 * __thiscall FUN_004826b0(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x10);
  do {
    if (puVar2 == *(undefined4 **)(param_1 + 0x10)) {
      *param_2 = 0;
      param_2[1] = 0;
LAB_00482784:
      *unaff_FS_OFFSET = iVar1;
      return param_2;
    }
    piVar3 = *(int **)(puVar2[5] + 0x10);
    if ((*(int *)(puVar2[5] + 0x14) - (int)piVar3 >> 2 != 0) && (iVar4 = *piVar3, iVar4 != 0)) {
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 != -1) goto LAB_0048273f;
LAB_00482715:
      *param_2 = 0;
      param_2[1] = 0;
      if (puVar2[6] != 0) {
        LOCK();
        piVar3 = (int *)(puVar2[6] + 4);
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      *param_2 = puVar2[5];
      param_2[1] = puVar2[6];
      goto LAB_00482784;
    }
    iVar4 = 0;
LAB_0048273f:
    if ((puVar2[2] - iVar4 <= *param_3) && (*param_3 <= puVar2[2] + iVar4)) {
      if ((puVar2[3] - iVar4 <= param_3[1]) && (param_3[1] <= puVar2[3] + iVar4)) goto LAB_00482715;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}



void FUN_004827b0(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 uStack_2d;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined8 uStack_24;
  int iStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb010f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_34 = 0;
  iVar3 = func_0x0048ca40(auStack_2c,param_2,
                          (*param_2 * 0x2000 + param_2[1]) * 0x10 + (int)(short)param_2[2],uStack_18
                         );
  iVar3 = *(int *)(iVar3 + 4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iStack_1c + 0x10);
  }
  if (iVar3 == *(int *)(iStack_1c + 0x10)) {
    uStack_24 = 0;
    func_0x00485380();
    iStack_8 = 1;
    iStack_28 = param_3;
    uStack_2d = 0;
    func_0x00484cb0(&uStack_2d,&iStack_28);
    FUN_0047dca0(param_2);
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    uStack_48 = *(undefined8 *)param_2;
    iStack_40 = param_2[2];
    if (uStack_24._4_4_ != (int *)0x0) {
      LOCK();
      uStack_24._4_4_[1] = uStack_24._4_4_[1] + 1;
      UNLOCK();
    }
    uStack_3c = (undefined4)uStack_24;
    piStack_38 = uStack_24._4_4_;
    iStack_8._0_1_ = 2;
    uStack_34 = 2;
    func_0x00488430(auStack_2c,&uStack_48);
    uStack_34 = 0;
    iStack_8._0_1_ = 1;
    if (piStack_38 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_38[1] + -1;
      piStack_38[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_38;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar3 = piStack_38[2] + -1;
        piStack_38[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piStack_38 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    *param_1 = (undefined4)uStack_24;
    param_1[1] = 0;
    param_1[1] = uStack_24._4_4_;
    uStack_24 = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
  }
  else {
    piVar1 = *(int **)(*(int *)(iVar3 + 0x14) + 0x10);
    if ((*(int *)(*(int *)(iVar3 + 0x14) + 0x14) - (int)piVar1 >> 2 == 0) ||
       (iVar4 = *piVar1, iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4);
    }
    if (iVar4 != param_3) {
      iStack_1c = param_3;
      uStack_2d = 0;
      func_0x00484cb0(&uStack_2d,&iStack_1c);
    }
    *param_1 = 0;
    param_1[1] = 0;
    if (*(int *)(iVar3 + 0x18) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(iVar3 + 0x18) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_1 = *(undefined4 *)(iVar3 + 0x14);
    param_1[1] = *(undefined4 *)(iVar3 + 0x18);
    iStack_8 = 0;
  }
  uStack_34 = 1;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_004829d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_1c [8];
  int iStack_14;
  int iStack_10;
  short sStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  FUN_0047dd70(&iStack_14);
  iVar3 = func_0x0048ca40(auStack_1c,&iStack_14,
                          (iStack_14 * 0x2000 + iStack_10) * 0x10 + (int)sStack_c);
  piVar4 = *(int **)(iVar3 + 4);
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x10);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar4 != piVar2) {
    piVar1 = (int *)(*(int *)(param_1 + 0x18) +
                    ((piVar4[3] + piVar4[2] * 0x2000) * 0x10 + (int)(short)piVar4[4] &
                    *(uint *)(param_1 + 0x24)) * 8);
    if ((int *)piVar1[1] == piVar4) {
      if ((int *)*piVar1 == piVar4) {
        *piVar1 = (int)piVar2;
        piVar1[1] = (int)piVar2;
      }
      else {
        piVar1[1] = piVar4[1];
      }
    }
    else if ((int *)*piVar1 == piVar4) {
      *piVar1 = *piVar4;
    }
    iVar3 = *piVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    *(int *)piVar4[1] = iVar3;
    *(int *)(iVar3 + 4) = piVar4[1];
    func_0x00488dd0();
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00482a90(int param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eaf996;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uStack_8 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar10 = 1;
  uStack_14 = uVar8;
  puVar9 = param_2;
  for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
    if (puVar4[6] != 0) {
      LOCK();
      piVar1 = (int *)(puVar4[6] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uStack_1c = puVar4[5];
    piStack_18 = (int *)puVar4[6];
    uStack_8 = 2;
    puVar5 = *(undefined4 **)((int)param_2 + 4);
    if (puVar5 == *(undefined4 **)(param_2 + 1)) {
      func_0x00488840(puVar5,&uStack_1c,uVar8);
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      if (piStack_18 != (int *)0x0) {
        LOCK();
        piStack_18[1] = piStack_18[1] + 1;
        UNLOCK();
      }
      *puVar5 = uStack_1c;
      puVar5[1] = piStack_18;
      *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 8;
    }
    piVar1 = piStack_18;
    uStack_8 = 0;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar7 = piStack_18[1] + -1;
      piStack_18[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar6 = *(code **)*piStack_18;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar7 = *piVar2 + -1;
        *piVar2 = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar6 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar9,uVar10);
  return;
}



void __fastcall FUN_00482c00(int *param_1)

{
  if (*param_1 != 0) {
    func_0x00485920(*param_1);
    func_0x0046e710(*param_1,param_1[2] - *param_1 >> 3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



undefined * Catch_00482eb1(void)

{
  func_0x0046a610(4,1);
  return &DAT_00482ecd;
}



void __thiscall
FUN_00483060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_54 [4];
  char acStack_50 [68];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_54;
  iVar1 = sprintf_s(acStack_50,0x40,"%p",param_7);
  func_0x00483ed0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_50,iVar1);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_004830d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,double param_7)

{
  short sVar1;
  uint uVar2;
  char *_Format;
  uint uVar3;
  char ****ppppcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  uint uStack_38;
  char ***pppcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  size_t sStack_24;
  uint uStack_20;
  undefined1 auStack_1c [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb020d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  sStack_24 = 0;
  uStack_20 = 0xf;
  pppcStack_34 = (char ***)0x0;
  uStack_8 = 0;
  uVar3 = *(uint *)(param_5 + 0x14) & 0x3000;
  uVar8 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_14 = uVar2;
  if (uVar3 == 0x3000) {
    uVar7 = 0xffffffff;
    uVar5 = 0xd;
  }
  else {
    iVar6 = *(int *)(param_5 + 0x1c);
    uVar7 = *(uint *)(param_5 + 0x18);
    if ((iVar6 < 0) || ((uVar5 = uVar7, iVar6 < 1 && (uVar7 == 0)))) {
      if (uVar7 == 0 && iVar6 == 0) {
        if (uVar3 == 0) {
          uVar5 = 1;
          goto LAB_004831db;
        }
        uVar5 = 0;
      }
      else {
        uVar5 = 6;
      }
    }
    if ((uVar3 == 0x2000) && (10000000000.0 <= ABS(param_7) && ABS(param_7) != 10000000000.0)) {
      frexp(param_7,(int *)&uStack_38);
      uVar5 = uVar5 + (int)(((uStack_38 ^ (int)uStack_38 >> 0x1f) - ((int)uStack_38 >> 0x1f)) *
                           0x7597) / 100000;
    }
  }
LAB_004831db:
  iVar6 = uVar5 + 0x32;
  if (0xffffffcd < uVar5) {
    iVar6 = -1;
  }
  func_0x004698c0(iVar6,0,uVar2);
  sVar1 = func_0x008ab094(SUB84(param_7,0),uVar8);
  uVar2 = *(uint *)(param_5 + 0x14);
  if (sVar1 >= 1) {
    uVar2 = *(uint *)(param_5 + 0x14) & 0xffffffef;
  }
  _Format = (char *)func_0x004842d0(param_1,auStack_1c,0x4c,uVar2);
  ppppcVar4 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar4 = (char ****)pppcStack_34;
  }
  iVar6 = sprintf_s((char *)ppppcVar4,sStack_24,_Format,uVar7,SUB84(param_7,0),uVar8);
  ppppcVar4 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar4 = (char ****)pppcStack_34;
  }
  func_0x00485ce0(param_2,param_3,param_4,param_5,param_6,ppppcVar4,iVar6,sVar1 < 1);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_20) {
    uVar2 = uStack_20 + 1;
    ppppcVar4 = (char ****)pppcStack_34;
    if (0xfff < uVar2) {
      ppppcVar4 = (char ****)pppcStack_34[-1];
      uVar2 = uStack_20 + 0x24;
      if ((char *)0x1f < (char *)((int)pppcStack_34 + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(ppppcVar4,uVar2);
  }
  sStack_24 = 0;
  uStack_20 = 0xf;
  pppcStack_34 = (char ***)((uint)pppcStack_34 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_004832f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,double param_7)

{
  short sVar1;
  uint uVar2;
  char *_Format;
  uint uVar3;
  char ****ppppcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  uint uStack_38;
  char ***pppcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  size_t sStack_24;
  uint uStack_20;
  undefined1 auStack_1c [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eb020d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  sStack_24 = 0;
  uStack_20 = 0xf;
  pppcStack_34 = (char ***)0x0;
  uStack_8 = 0;
  uVar3 = *(uint *)(param_5 + 0x14) & 0x3000;
  uVar8 = (undefined4)((ulonglong)param_7 >> 0x20);
  uStack_14 = uVar2;
  if (uVar3 == 0x3000) {
    uVar7 = 0xffffffff;
    uVar5 = 0xd;
  }
  else {
    iVar6 = *(int *)(param_5 + 0x1c);
    uVar7 = *(uint *)(param_5 + 0x18);
    if ((iVar6 < 0) || ((uVar5 = uVar7, iVar6 < 1 && (uVar7 == 0)))) {
      if (uVar7 == 0 && iVar6 == 0) {
        if (uVar3 == 0) {
          uVar5 = 1;
          goto LAB_004833fb;
        }
        uVar5 = 0;
      }
      else {
        uVar5 = 6;
      }
    }
    if ((uVar3 == 0x2000) && (10000000000.0 <= ABS(param_7) && ABS(param_7) != 10000000000.0)) {
      frexp(param_7,(int *)&uStack_38);
      uVar5 = uVar5 + (int)(((uStack_38 ^ (int)uStack_38 >> 0x1f) - ((int)uStack_38 >> 0x1f)) *
                           0x7597) / 100000;
    }
  }
LAB_004833fb:
  iVar6 = uVar5 + 0x32;
  if (0xffffffcd < uVar5) {
    iVar6 = -1;
  }
  func_0x004698c0(iVar6,0,uVar2);
  sVar1 = func_0x008ab08e(SUB84(param_7,0),uVar8);
  uVar2 = *(uint *)(param_5 + 0x14);
  if (sVar1 >= 1) {
    uVar2 = *(uint *)(param_5 + 0x14) & 0xffffffef;
  }
  _Format = (char *)func_0x004842d0(param_1,auStack_1c,0,uVar2);
  ppppcVar4 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar4 = (char ****)pppcStack_34;
  }
  iVar6 = sprintf_s((char *)ppppcVar4,sStack_24,_Format,uVar7,SUB84(param_7,0),uVar8);
  ppppcVar4 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar4 = (char ****)pppcStack_34;
  }
  func_0x00485ce0(param_2,param_3,param_4,param_5,param_6,ppppcVar4,iVar6,sVar1 < 1);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_20) {
    uVar2 = uStack_20 + 1;
    ppppcVar4 = (char ****)pppcStack_34;
    if (0xfff < uVar2) {
      ppppcVar4 = (char ****)pppcStack_34[-1];
      uVar2 = uStack_20 + 0x24;
      if ((char *)0x1f < (char *)((int)pppcStack_34 + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(ppppcVar4,uVar2);
  }
  sStack_24 = 0;
  uStack_20 = 0xf;
  pppcStack_34 = (char ***)((uint)pppcStack_34 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00483510(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  undefined4 uStack_5c;
  char cStack_58;
  undefined1 auStack_57 [2];
  byte abStack_55 [5];
  char acStack_50 [68];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_5c;
  cStack_58 = '%';
  uVar1 = *(uint *)(param_4 + 0x14);
  if ((uVar1 & 0x20) != 0) {
    auStack_57[0] = 0x2b;
  }
  puVar2 = (undefined2 *)auStack_57;
  if ((uVar1 & 0x20) != 0) {
    puVar2 = (undefined2 *)(auStack_57 + 1);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  *puVar2 = 0x3649;
  *(undefined1 *)(puVar2 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar4 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar4 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar4 = 0x75;
  }
  *(byte *)((int)puVar2 + 3) = bVar4;
  *(undefined1 *)(puVar2 + 2) = 0;
  iVar3 = sprintf_s(acStack_50,0x40,&cStack_58,param_6,param_7);
  func_0x00483ed0(uStack_5c,param_1,param_2,param_3,param_4,param_5,acStack_50,iVar3);
  FUN_008ab370();
  return;
}



void FUN_004835f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  undefined4 uStack_5c;
  char cStack_58;
  undefined1 auStack_57 [2];
  byte abStack_55 [5];
  char acStack_50 [68];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_5c;
  cStack_58 = '%';
  uVar1 = *(uint *)(param_4 + 0x14);
  if ((uVar1 & 0x20) != 0) {
    auStack_57[0] = 0x2b;
  }
  puVar2 = (undefined2 *)auStack_57;
  if ((uVar1 & 0x20) != 0) {
    puVar2 = (undefined2 *)(auStack_57 + 1);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  *puVar2 = 0x3649;
  *(undefined1 *)(puVar2 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar4 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar4 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar4 = 100;
  }
  *(byte *)((int)puVar2 + 3) = bVar4;
  *(undefined1 *)(puVar2 + 2) = 0;
  iVar3 = sprintf_s(acStack_50,0x40,&cStack_58,param_6,param_7);
  func_0x00483ed0(uStack_5c,param_1,param_2,param_3,param_4,param_5,acStack_50,iVar3);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_004836d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_5c;
  char acStack_58 [8];
  char acStack_50 [68];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_5c;
  uVar1 = *(uint *)(param_5 + 0x14);
  acStack_58[0] = '%';
  if ((uVar1 & 0x20) != 0) {
    acStack_58[1] = 0x2b;
  }
  pcVar4 = acStack_58 + 1;
  if ((uVar1 & 0x20) != 0) {
    pcVar4 = acStack_58 + 2;
  }
  if ((uVar1 & 8) != 0) {
    *pcVar4 = '#';
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = 'l';
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 0x75;
  }
  pcVar4[1] = bVar2;
  pcVar4[2] = '\0';
  uStack_5c = param_1;
  iVar3 = sprintf_s(acStack_50,0x40,acStack_58,param_7);
  func_0x00483ed0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_50,iVar3);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_004837a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_5c;
  char acStack_58 [8];
  char acStack_50 [68];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_5c;
  uVar1 = *(uint *)(param_5 + 0x14);
  acStack_58[0] = '%';
  if ((uVar1 & 0x20) != 0) {
    acStack_58[1] = 0x2b;
  }
  pcVar4 = acStack_58 + 1;
  if ((uVar1 & 0x20) != 0) {
    pcVar4 = acStack_58 + 2;
  }
  if ((uVar1 & 8) != 0) {
    *pcVar4 = '#';
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = 'l';
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 100;
  }
  pcVar4[1] = bVar2;
  pcVar4[2] = '\0';
  uStack_5c = param_1;
  iVar3 = sprintf_s(acStack_50,0x40,acStack_58,param_7);
  func_0x00483ed0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_50,iVar3);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00483870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined1 param_6,char param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  uint uVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [4];
  int iStack_60;
  undefined4 ***pppuStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined1 auStack_44 [4];
  int *piStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb0298;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = 0;
  iStack_60 = param_5;
  uStack_3c = CONCAT31(uStack_3c._1_3_,param_6);
  piStack_38 = param_1;
  if ((*(uint *)(param_5 + 0x14) & 0x4000) == 0) {
    pcVar1 = *(code **)(*param_1 + 0x24);
    _guard_check_icall(param_2,param_3,param_4,param_5,uStack_3c,param_7);
    (*pcVar1)();
  }
  else {
    uStack_8 = 0;
    piStack_40 = *(int **)(*(int *)(param_5 + 0x30) + 4);
    pcVar1 = *(code **)(*piStack_40 + 4);
    _guard_check_icall(uStack_14);
    (*pcVar1)();
    uStack_30 = 1;
    piStack_34 = (int *)func_0x00486140(auStack_44);
    uStack_30 = 0;
    uStack_8 = 0xffffffff;
    if (piStack_40 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_40 + 8);
      _guard_check_icall();
      piStack_40 = (int *)(*pcVar1)();
      if (piStack_40 != (int *)0x0) {
        pcVar1 = *(code **)*piStack_40;
        _guard_check_icall(1);
        (*pcVar1)();
      }
    }
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0xf00000000;
    pppuStack_2c = (undefined4 ***)0x0;
    if (param_7 == '\0') {
      uStack_8 = 3;
      pcVar1 = *(code **)(*piStack_34 + 0x18);
      _guard_check_icall(&pppuStack_5c);
      (*pcVar1)();
    }
    else {
      uStack_8 = 2;
      pcVar1 = *(code **)(*piStack_34 + 0x1c);
      _guard_check_icall(&pppuStack_5c);
      (*pcVar1)();
    }
    uVar5 = uStack_4c;
    iVar4 = iStack_60;
    pppuStack_2c = pppuStack_5c;
    uStack_28 = uStack_58;
    uStack_24 = uStack_54;
    uStack_20 = uStack_50;
    uStack_1c._0_4_ = uStack_4c;
    uStack_1c._4_4_ = uStack_48;
    uStack_30 = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    pppuStack_5c = (undefined4 ***)((uint)pppuStack_5c & 0xffffff00);
    uStack_48 = 0xf;
    uVar8 = *(uint *)(iStack_60 + 0x20);
    uStack_4c = 0;
    if ((*(int *)(iStack_60 + 0x24) < 0) ||
       (((*(int *)(iStack_60 + 0x24) < 1 && (uVar8 == 0)) || (uVar8 <= uVar5)))) {
      iVar9 = 0;
    }
    else {
      iVar9 = uVar8 - uVar5;
    }
    if ((*(uint *)(iStack_60 + 0x14) & 0x1c0) != 0x40) {
      puVar6 = (undefined4 *)func_0x00483e40(piStack_38,auStack_64,param_3,param_4,uStack_3c,iVar9);
      iVar9 = 0;
      param_3 = *puVar6;
      param_4 = puVar6[1];
    }
    ppppuVar7 = &pppuStack_2c;
    if (0xf < uStack_1c._4_4_) {
      ppppuVar7 = (undefined4 ****)pppuStack_2c;
    }
    puVar6 = (undefined4 *)
             func_0x00483e80(piStack_38,auStack_64,param_3,param_4,ppppuVar7,(uint)uStack_1c);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    func_0x00483e40(piStack_38,param_2,uVar2,uVar3,uStack_3c,iVar9);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_1c._4_4_) {
      uVar8 = uStack_1c._4_4_ + 1;
      ppppuVar7 = (undefined4 ****)pppuStack_2c;
      if (0xfff < uVar8) {
        ppppuVar7 = (undefined4 ****)pppuStack_2c[-1];
        uVar8 = uStack_1c._4_4_ + 0x24;
        if (0x1f < (uint)((int)pppuStack_2c + (-4 - (int)ppppuVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(ppppuVar7,uVar8);
    }
    uStack_1c = 0xf00000000;
    pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00483c00(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabde5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::num_put<>::vftable;
  *param_1 = std::locale::facet::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00483c70(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabc2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar2 = *(char **)(param_1 + 0x14);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00483d00(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabc2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar2 = *(char **)(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00483d90(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabc2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar2 = *(char **)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined1 __fastcall FUN_00483e20(int param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



undefined1 __fastcall FUN_00483e30(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



undefined * Catch_004844a0(void)

{
  func_0x0046a610(4,1);
  return &DAT_004844b9;
}



undefined4 * __thiscall FUN_00484510(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabde5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::numpunct<char>::vftable;
  uStack_8 = 0;
  free((void *)param_1[2]);
  free((void *)param_1[4]);
  free((void *)param_1[5]);
  *param_1 = std::locale::facet::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_00485a83(void)

{
  func_0x0046a610(4,1);
  return &DAT_00485a9c;
}



void FUN_00486450(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,undefined4 *param_8)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  char cStack_43;
  undefined1 *puStack_40;
  undefined1 auStack_3c [4];
  int *piStack_38;
  undefined1 auStack_34 [32];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = param_8;
  puVar2 = param_7;
  puStack_c = &DAT_00eb0a4e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_38 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piStack_38 + 4);
  uStack_14 = uVar4;
  _guard_check_icall(uVar4);
  (*pcVar1)();
  uVar5 = func_0x00488e70(auStack_34,&param_2,&param_4,0x800,auStack_3c);
  uStack_8 = 0xffffffff;
  uVar7 = uVar5;
  if (piStack_38 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_38 + 8);
    _guard_check_icall(uVar4);
    puVar6 = (undefined4 *)(*pcVar1)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar6;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    uVar7 = uVar5 & 0xffff;
  }
  if ((char)uVar7 < '\0') {
    *puVar2 = 2;
    *puVar3 = 0;
  }
  else {
    uVar8 = func_0x00e72aff(auStack_34,&puStack_40,(int)(char)uVar7,&piStack_38);
    *puVar3 = uVar8;
    if ((puStack_40 == auStack_34) || (piStack_38 != (int *)0x0)) {
      *puVar2 = 2;
      *puVar3 = 0;
    }
    cStack_43 = (char)(uVar5 >> 8);
    if (cStack_43 != '\0') {
      *puVar2 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    func_0x0048c000();
  }
  if (param_5 == '\0') {
    func_0x0048c000();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_004865b1;
  }
  else if (param_4 == 0) goto LAB_004865b1;
  *puVar2 = *puVar2 | 1;
LAB_004865b1:
  *param_1 = param_2;
  param_1[1] = param_3;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}

