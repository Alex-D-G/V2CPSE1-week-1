.cpu cortex-m0
.text
.align 2
.global convert_char
.global check_lower

convert_char:
    push {lr}
    mov r1, r0
    sub r1, r1, #65 
    BLT check_lower
    sub r1, r1, #25
    BGT check_lower
    add r0, r0, #32
    b done


check_lower:
    mov r1, r0
    sub r1, r1, #97
    BLT done
    sub r1, r1, #25
    BGT done
    sub r0, r0, #32
    b done

done:
    pop {pc}
