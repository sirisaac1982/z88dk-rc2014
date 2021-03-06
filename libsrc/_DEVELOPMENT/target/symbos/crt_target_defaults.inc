
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; crt target defaults ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

IF __CRTDEF = -1

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; user supplied crt defaults ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   INCLUDE "crtdef.inc"

ENDIF

IF __CRTDEF = 0

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; symbos standard ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   defc TAR__crt_org_code              = 0      ;; no effect
   defc TAR__crt_org_data              = 0      ;; no effect
   defc TAR__crt_org_bss               = 0      ;; no effect

   defc TAR__crt_model                 = 0      ;; no effect
   
   defc TAR__register_sp               = -1     ;; no effect
   defc TAR__crt_stack_size            = 384
      
   defc TAR__crt_initialize_bss        = 0      ;; no effect
   
   defc TAR__crt_enable_commandline    = 1
   defc TAR__crt_enable_restart        = 0      ;; no effect
   defc TAR__crt_enable_close          = 1
   
   defc TAR__crt_enable_rst            = 0      ;; no effect
   defc TAR__crt_enable_nmi            = 0      ;; no effect
   
   ; clib defaults
   
   defc TAR__clib_exit_stack_size      = 2
   defc TAR__clib_quickexit_stack_size = 0
   
   defc TAR__clib_malloc_heap_size     = 0
   defc TAR__clib_stdio_heap_size      = 128
   
   defc TAR__clib_balloc_table_size    = 0
   
   defc TAR__clib_fopen_max            = 0
   defc TAR__clib_open_max             = 0

ENDIF

;; end crt target defaults ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
