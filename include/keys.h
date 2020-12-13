/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andru <andru@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:10:33 by andru             #+#    #+#             */
/*   Updated: 2020/12/14 00:22:06 by andru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYS_H
# define KEYS_H


# define KEYPRESS 2
# define KEYRELEASE 3
# define BUTTONPRESS 4
# define BUTTONRELEASE 5
# define MOTIONNOTIFY 6
# define ENTERNOTIFY 7
# define LEAVENOTIFY 8
# define FOCUSIN 9
# define FOCUSOUT 10
# define KEYMAPNOTIFY 11
# define EXPOSE 12
# define GRAPHICSEXPOSE 13
# define NOEXPOSE 14
# define VISIBILITYNOTIFY 15
# define CREATENOTIFY 16
# define DESTROYNOTIFY 17
# define UNMAPNOTIFY 18
# define MAPNOTIFY 19
# define MAPREQUEST 20
# define REPARENTNOTIFY 21
# define CONFIGURENOTIFY 22
# define CONFIGUREREQUEST 23
# define GRAVITYNOTIFY 24

# ifdef __APPLE__

/*
** Macros for mlx_hook function
*/

#  define NOEVENTMASK 0L
#  define KEYPRESSMASK (1L<<0)
#  define KEYRELEASEMASK (1L<<1)
#  define BUTTONPRESSMASK (1L<<2)
#  define BUTTONRELEASEMASK (1L<<3)
#  define ENTERWINDOWMASK (1L<<4)
#  define LEAVEWINDOWMASK (1L<<5)
#  define POINTERMOTIONMASK (1L<<6)
#  define POINTERMOTIONHINTMASK (1L<<7)
#  define BUTTON1MOTIONMASK (1L<<8)
#  define BUTTON2MOTIONMASK (1L<<9)
#  define BUTTON3MOTIONMASK (1L<<10)
#  define BUTTON4MOTIONMASK (1L<<11)
#  define BUTTON5MOTIONMASK (1L<<12)
#  define BUTTONMOTIONMASK (1L<<13)
#  define KEYMAPSTATEMASK (1L<<14)
#  define EXPOSUREMASK (1L<<15)
#  define VISIBILITYCHANGEMASK (1L<<16)
#  define STRUCTURENOTIFYMASK (1L<<17)
#  define RESIZEREDIRECTMASK (1L<<18)
#  define SUBSTRUCTURENOTIFYMASK (1L<<19)
#  define SUBSTRUCTUREREDIRECTMASK (1L<<20)
#  define FOCUSCHANGEMASK (1L<<21)
#  define PROPERTYCHANGEMASK (1L<<22)
#  define COLORMAPCHANGEMASK (1L<<23)
#  define OWNERGRABBUTTONMASK (1L<<24)



/*
** Mouse button keycodes
*/

#  define BUT1_KEY 1
#  define BUT2_KEY 2
#  define BUT3_KEY 3
#  define SCROLLUP_KEY 4
#  define SCROLLDOWN_KEY 5
#  define SCROLLLEFT_KEY 6
#  define SCROLLRIGHT_KEY 7

/*
** Keyboard keys
*/

/*
** Letters keys
*/

#  define A_KEY 0
#  define B_KEY 11
#  define C_KEY 8
#  define D_KEY 2
#  define E_KEY 14
#  define F_KEY 3
#  define G_KEY 5
#  define H_KEY 4
#  define I_KEY 34
#  define J_KEY 38
#  define K_KEY 40
#  define L_KEY 37
#  define M_KEY 46
#  define N_KEY 45
#  define O_KEY 31
#  define P_KEY 35
#  define Q_KEY 12
#  define R_KEY 15
#  define S_KEY 1
#  define T_KEY 17
#  define U_KEY 32
#  define V_KEY 9
#  define W_KEY 13
#  define X_KEY 7
#  define Y_KEY 16
#  define Z_KEY 6

/*
** Numbers (not numeric keypad ones)
*/

#  define K1_KEY 18
#  define K2_KEY 19
#  define K3_KEY 20
#  define K4_KEY 21
#  define K5_KEY 23
#  define K6_KEY 22
#  define K7_KEY 26
#  define K8_KEY 28
#  define K9_KEY 25
#  define K0_KEY 29

/*
** Special characters
** SP_KEY is the space ( ) key
** BQ_KEY is the back quote (`) and tilde (~) key
** MN_KEY is the minus (-) and underscore (_) key
** PL_KEY is the plus (+) and equal (=) key
** SBO_KEY is the square bracket opening ([) and brace opening ({) key
** SBC_KEY is the square bracket closing (]) and brace closing (}) key
** BSL_KEY is the backslash (\) and pipe (|) key
** SC_KEY is the semicolon (;) and colon (:) key
** SQ_KEY is the simple quote (') and double quote (") key
** CM_KEY is the comma (,) and angle bracket opening (<) key
** PT_KEY is the point (.) and angle bracket closing (>) key
** SL_KEY is the slash (/) and question mark (?) key
*/

#  define SP_KEY 49
#  define BQ_KEY 50
#  define MN_KEY 27
#  define PL_KEY 24
#  define SBO_KEY 33
#  define SBC_KEY 30
#  define BSL_KEY 42
#  define SC_KEY 41
#  define SQ_KEY 39
#  define CM_KEY 43
#  define PT_KEY 47
#  define SL_KEY 44

/*
** Functions keys, you might use fn key to use them
** I didn't find the F11_KEY value
*/

#  define F1_KEY 122
#  define F2_KEY 120
#  define F3_KEY 99
#  define F4_KEY 118
#  define F5_KEY 96
#  define F6_KEY 97
#  define F7_KEY 98
#  define F8_KEY 100
#  define F9_KEY 101
#  define F10_KEY 109
#  define F11_KEY
#  define F12_KEY 111
#  define F13_KEY 105
#  define F14_KEY 107
#  define F15_KEY 113
#  define F16_KEY 106
#  define F17_KEY 64
#  define F18_KEY 79
#  define F19_KEY 80

/*
** Arrow keys
*/

#  define UP_KEY 126
#  define DOWN_KEY 125
#  define RIGHT_KEY 124
#  define LEFT_KEY 123

/*
** Special keys
** CL_KEY is the caps lock key
** LSFT_KEY and RLFT_KEY are the left shift and right shift keys
** LCTRL_KEY and RCTRL_KEY are the left control and right control keys
** LOPT_KEY and ROPT_KEY are the left option and right option keys
** LCMD_KEY and RCMD_KEY are the left command and right command keys
** LDEL_KEY and RDEL_KEY are the left delete and right delete keys
** RTN_KEY is the return key
** EJ_KEY is the eject key and doesn't react
** PUP_KEY and PDOWN_KEY are the page up and page down keys
** CLR_KEY is the clear key
*/

#  define ESC_KEY 53
#  define TAB_KEY 48
#  define CL_KEY 272
#  define LSFT_KEY 257
#  define LCTRL_KEY 256
#  define LOPT_KEY 261
#  define LCMD_KEY 259
#  define LDEL_KEY 51
#  define RTN_KEY 36
#  define RSFT_KEY 258
#  define RCTRL_KEY 269
#  define ROPT_KEY 262
#  define RCMD_KEY 260
#  define EJ_KEY
#  define FN_KEY 279
#  define RDEL_KEY 117
#  define HOME_KEY 115
#  define END_KEY 119
#  define PUP_KEY 116
#  define PDOWN_KEY 121
#  define CLR_KEY 71

/*
** Numeric keyboard keys, preceded by NK
** NKEQ_KEY is the equal (=) key
** NKSL_KEY is the slash (/) key
** NKWC_KEY is the wildcard (*) key
** NKMN_KEY is the minus (-) key
** NKPL_KEY is the plus (+) key
** NKPT_KEY is the point (.) key
** NKNTR_KEY is the enter key
*/

#  define NK1_KEY 83
#  define NK2_KEY 84
#  define NK3_KEY 85
#  define NK4_KEY 86
#  define NK5_KEY 87
#  define NK6_KEY 88
#  define NK7_KEY 89
#  define NK8_KEY 91
#  define NK9_KEY 92
#  define NK0_KEY 82
#  define NKEQ_KEY 81
#  define NKSL_KEY 75
#  define NKWC_KEY 67
#  define NKMN_KEY 78
#  define NKPL_KEY 69
#  define NKPT_KEY 65
#  define NKNTR_KEY 76
#  define PP
#  define NUM_1	18
#  define NUM_2	19
#  define NUM_3	20
#  define NUM_4	21
#  define NUM_5	22
#  define NUM_6	23
#  define NUM_7	24
#  define NUM_ESC	53
#  define NUMPAD_4	86
#  define NUMPAD_5	87
#  define NUMPAD_6	88
#  define NUMPAD_7	89
#  define NUMPAD_8	90
#  define NUMPAD_9	91
#  define NUMPAD_PLUS	65451
#  define NUMPAD_MINS	65453
#  define NUM_S	1
#  define NUM_Q	12
#  define RED 2
#  define BLUE 0
#  define LM_KEY 1
#  define RM_KEY 2
# else
#  define PP ++
#  define NUM_1 49
#  define NUM_2 50
#  define NUM_3 51
#  define NUM_4 52
#  define NUM_5 53
#  define NUM_6 45
#  define NUM_7 55
#  define NUM_ESC	65305
#  define NUMPAD_1	65436
#  define NUMPAD_2	65433
#  define NUMPAD_3	65435
#  define NUMPAD_4	65430
#  define NUMPAD_5	65437
#  define NUMPAD_6	65432
#  define NUMPAD_7	65429
#  define NUMPAD_8	65431
#  define NUMPAD_9	65434
#  define NUMPAD_PLUS	65451
#  define NUMPAD_MINS	65453
#  define NUM_S	115
#  define NUM_Q	113
#  define RED 0
#  define BLUE 2
#  define LM_KEY 1
#  define RM_KEY 3

#  define A_KEY 97
#  define B_KEY 98
#  define C_KEY 99
#  define D_KEY 100
#  define E_KEY 101
#  define F_KEY 102
#  define G_KEY 103
#  define H_KEY 104
#  define I_KEY 105
#  define J_KEY 106
#  define K_KEY 107
#  define L_KEY 108
#  define M_KEY 109
#  define N_KEY 110
#  define O_KEY 111
#  define P_KEY 112
#  define Q_KEY 113
#  define R_KEY 114
#  define S_KEY 115
#  define T_KEY 116
#  define U_KEY 117
#  define V_KEY 118
#  define W_KEY 119
#  define X_KEY 120
#  define Y_KEY 121
#  define Z_KEY 122

/*
** Arrow keys
*/

#  define UP_KEY 65362
#  define DOWN_KEY 65364
#  define RIGHT_KEY 65363
#  define LEFT_KEY 65361

/*
** Special keys
** CL_KEY is the caps lock key
** LSFT_KEY and RLFT_KEY are the left shift and right shift keys
** LCTRL_KEY and RCTRL_KEY are the left control and right control keys
** LOPT_KEY and ROPT_KEY are the left option (Alt) and right option keys
** LCMD_KEY and RCMD_KEY are the left command and right command keys
** LDEL_KEY and RDEL_KEY are the left delete and right delete keys
** RTN_KEY is the return key
** EJ_KEY is the eject key and doesn't react
** PUP_KEY and PDOWN_KEY are the page up and page down keys
** CLR_KEY is the clear key
*/


#  define LSFT_KEY 65505
#  define LCTRL_KEY 65507
#  define LOPT_KEY 65513
#  define RSFT_KEY 65506
#  define RCTRL_KEY 65508
#  define ROPT_KEY 65514
#  define LCMD_KEY 259
#  define LDEL_KEY 51
#  define RTN_KEY 36
#  define ESC_KEY 53
#  define TAB_KEY 48
#  define CL_KEY 272
#  define RCMD_KEY 260
#  define EJ_KEY
#  define FN_KEY 279
#  define RDEL_KEY 117
#  define HOME_KEY 115
#  define END_KEY 119
#  define PUP_KEY 116
#  define PDOWN_KEY 121
#  define CLR_KEY 71

# endif

#endif