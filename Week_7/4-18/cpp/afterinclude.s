	.file	"afterinclude.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN6StringC2EPKc,"axG",@progbits,_ZN6StringC5EPKc,comdat
	.align 2
	.weak	_ZN6StringC2EPKc
	.type	_ZN6StringC2EPKc, @function
_ZN6StringC2EPKc:
.LFB975:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	strlen
	addl	$1, %eax
	movl	%eax, (%esp)
	call	_Znaj
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	strcpy
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE975:
	.size	_ZN6StringC2EPKc, .-_ZN6StringC2EPKc
	.weak	_ZN6StringC1EPKc
	.set	_ZN6StringC1EPKc,_ZN6StringC2EPKc
	.section	.text._ZN6StringC2ERKS_,"axG",@progbits,_ZN6StringC5ERKS_,comdat
	.align 2
	.weak	_ZN6StringC2ERKS_
	.type	_ZN6StringC2ERKS_, @function
_ZN6StringC2ERKS_:
.LFB978:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	strlen
	addl	$1, %eax
	movl	%eax, (%esp)
	call	_Znaj
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	12(%ebp), %eax
	movl	(%eax), %edx
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	strcpy
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE978:
	.size	_ZN6StringC2ERKS_, .-_ZN6StringC2ERKS_
	.weak	_ZN6StringC1ERKS_
	.set	_ZN6StringC1ERKS_,_ZN6StringC2ERKS_
	.section	.text._ZN6StringaSERKS_,"axG",@progbits,_ZN6StringaSERKS_,comdat
	.align 2
	.weak	_ZN6StringaSERKS_
	.type	_ZN6StringaSERKS_, @function
_ZN6StringaSERKS_:
.LFB980:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_ZdlPv
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	strlen
	addl	$1, %eax
	movl	%eax, (%esp)
	call	_Znaj
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	12(%ebp), %eax
	movl	(%eax), %edx
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	strcpy
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE980:
	.size	_ZN6StringaSERKS_, .-_ZN6StringaSERKS_
	.section	.text._ZN6StringD2Ev,"axG",@progbits,_ZN6StringD5Ev,comdat
	.align 2
	.weak	_ZN6StringD2Ev
	.type	_ZN6StringD2Ev, @function
_ZN6StringD2Ev:
.LFB982:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_ZdlPv
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE982:
	.size	_ZN6StringD2Ev, .-_ZN6StringD2Ev
	.weak	_ZN6StringD1Ev
	.set	_ZN6StringD1Ev,_ZN6StringD2Ev
	.section	.text._ZN6String5debugEv,"axG",@progbits,_ZN6String5debugEv,comdat
	.align 2
	.weak	_ZN6String5debugEv
	.type	_ZN6String5debugEv, @function
_ZN6String5debugEv:
.LFB984:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE984:
	.size	_ZN6String5debugEv, .-_ZN6String5debugEv
	.section	.rodata
.LC0:
	.string	"Hello"
.LC1:
	.string	"Hou are you?"
	.text
	.globl	main
	.type	main, @function
main:
.LFB985:
	.cfi_startproc
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA985
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$32, %esp
	.cfi_offset 3, -12
	movl	$.LC0, 4(%esp)
	leal	20(%esp), %eax
	movl	%eax, (%esp)
.LEHB0:
	call	_ZN6StringC1EPKc
.LEHE0:
	leal	20(%esp), %eax
	movl	%eax, 4(%esp)
	leal	24(%esp), %eax
	movl	%eax, (%esp)
.LEHB1:
	call	_ZN6StringC1ERKS_
.LEHE1:
	leal	24(%esp), %eax
	movl	%eax, (%esp)
.LEHB2:
	call	_ZN6String5debugEv
	movl	$.LC1, 4(%esp)
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringC1EPKc
.LEHE2:
	leal	28(%esp), %eax
	movl	%eax, (%esp)
.LEHB3:
	call	_ZN6String5debugEv
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringaSERKS_
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6String5debugEv
.LEHE3:
	movl	$0, %ebx
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringD1Ev
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringD1Ev
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringD1Ev
	movl	%ebx, %eax
	jmp	.L18
.L17:
	movl	%eax, %ebx
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringD1Ev
	jmp	.L11
.L16:
	movl	%eax, %ebx
.L11:
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringD1Ev
	jmp	.L12
.L15:
	movl	%eax, %ebx
.L12:
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN6StringD1Ev
	movl	%ebx, %eax
	jmp	.L13
.L14:
.L13:
	movl	%eax, (%esp)
.LEHB4:
	call	_Unwind_Resume
.LEHE4:
.L18:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE985:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA985:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE985-.LLSDACSB985
.LLSDACSB985:
	.uleb128 .LEHB0-.LFB985
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L14-.LFB985
	.uleb128 0
	.uleb128 .LEHB1-.LFB985
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L15-.LFB985
	.uleb128 0
	.uleb128 .LEHB2-.LFB985
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L16-.LFB985
	.uleb128 0
	.uleb128 .LEHB3-.LFB985
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L17-.LFB985
	.uleb128 0
	.uleb128 .LEHB4-.LFB985
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE985:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB994:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	.L19
	cmpl	$65535, 12(%ebp)
	jne	.L19
	movl	$_ZStL8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, 8(%esp)
	movl	$_ZStL8__ioinit, 4(%esp)
	movl	$_ZNSt8ios_base4InitD1Ev, (%esp)
	call	__cxa_atexit
.L19:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE994:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB995:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE995:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 4
	.long	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu/Linaro 4.7.3-1ubuntu1) 4.7.3"
	.section	.note.GNU-stack,"",@progbits
