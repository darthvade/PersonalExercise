	.file	"smart_pointer.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN7IntegerC2Ev,"axG",@progbits,_ZN7IntegerC5Ev,comdat
	.align 2
	.weak	_ZN7IntegerC2Ev
	.type	_ZN7IntegerC2Ev, @function
_ZN7IntegerC2Ev:
.LFB972:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$4, (%esp)
	call	_Znwj
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	$0, (%eax)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE972:
	.size	_ZN7IntegerC2Ev, .-_ZN7IntegerC2Ev
	.weak	_ZN7IntegerC1Ev
	.set	_ZN7IntegerC1Ev,_ZN7IntegerC2Ev
	.section	.text._ZN7IntegerD2Ev,"axG",@progbits,_ZN7IntegerD5Ev,comdat
	.align 2
	.weak	_ZN7IntegerD2Ev
	.type	_ZN7IntegerD2Ev, @function
_ZN7IntegerD2Ev:
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
	.size	_ZN7IntegerD2Ev, .-_ZN7IntegerD2Ev
	.weak	_ZN7IntegerD1Ev
	.set	_ZN7IntegerD1Ev,_ZN7IntegerD2Ev
	.section	.text._ZN7Integer5debugEv,"axG",@progbits,_ZN7Integer5debugEv,comdat
	.align 2
	.weak	_ZN7Integer5debugEv
	.type	_ZN7Integer5debugEv, @function
_ZN7Integer5debugEv:
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
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE984:
	.size	_ZN7Integer5debugEv, .-_ZN7Integer5debugEv
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
	leal	28(%esp), %eax
	movl	%eax, (%esp)
.LEHB0:
	call	_ZN7IntegerC1Ev
.LEHE0:
	leal	28(%esp), %eax
	movl	%eax, (%esp)
.LEHB1:
	call	_ZN7Integer5debugEv
.LEHE1:
	movl	$0, %ebx
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN7IntegerD1Ev
	movl	%ebx, %eax
	jmp	.L11
.L10:
	movl	%eax, %ebx
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN7IntegerD1Ev
	movl	%ebx, %eax
	jmp	.L8
.L9:
.L8:
	movl	%eax, (%esp)
.LEHB2:
	call	_Unwind_Resume
.LEHE2:
.L11:
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
	.uleb128 .L9-.LFB985
	.uleb128 0
	.uleb128 .LEHB1-.LFB985
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L10-.LFB985
	.uleb128 0
	.uleb128 .LEHB2-.LFB985
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE985:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB991:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	.L12
	cmpl	$65535, 12(%ebp)
	jne	.L12
	movl	$_ZStL8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, 8(%esp)
	movl	$_ZStL8__ioinit, 4(%esp)
	movl	$_ZNSt8ios_base4InitD1Ev, (%esp)
	call	__cxa_atexit
.L12:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE991:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB992:
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
.LFE992:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 4
	.long	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu/Linaro 4.7.3-1ubuntu1) 4.7.3"
	.section	.note.GNU-stack,"",@progbits
