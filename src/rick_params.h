#define SCREEN_X 1280
#define SCREEN_Y 960

#define CAMERA_X 256
#define CAMERA_Y 200

#define TILE_COL        308
#define TILE_COL_DOWN   309
#define TILE_STAIRS     310
#define TILE_STAIRS_TOP 311

#define CHAR_STATE_STOP      0
#define CHAR_STATE_JUMPING   1
#define CHAR_STATE_RUNNING   2
#define CHAR_STATE_CLIMBING  3
#define CHAR_STATE_CROUCHING 4
#define CHAR_STATE_SHOOTING  5
#define CHAR_STATE_BOMBING   6
#define CHAR_STATE_HITTING   7
#define CHAR_STATE_DYING     8
#define CHAR_STATE_DEAD      9

#define CHAR_DIR_STOP  0b0000
#define CHAR_DIR_RIGHT 0b0001
#define CHAR_DIR_LEFT  0b0010
#define CHAR_DIR_UP    0b0100
#define CHAR_DIR_DOWN  0b1000

#define RICK_HOR_SPEED_MAX   2.0
#define RICK_HOR_SPEED_MIN   1.0
#define RICK_HOR_SPEED_STEP  0.1
#define RICK_VERT_SPEED_MAX  3.0
#define RICK_VERT_SPEED_MIN  1.0
#define RICK_VERT_SPEED_STEP 0.1

#define ACTION_COND_ALWAYS   0
#define ACTION_COND_TRIG_ON  1
#define ACTION_COND_TRIG_OFF 2

//#define SHOW_BOUNDING_BOXES