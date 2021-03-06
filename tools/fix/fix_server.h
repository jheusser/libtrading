enum fix_server_mode {
	FIX_SERVER_SCRIPT,
	FIX_SERVER_SESSION,
};

struct fix_server_arg {
	const char *script;
};

struct fix_server_function {
	int (*fix_session_accept)(struct fix_session_cfg *cfg, struct fix_server_arg *arg);
	enum fix_server_mode mode;
};

static int fix_server_script(struct fix_session_cfg *cfg, struct fix_server_arg *arg);
static int fix_server_session(struct fix_session_cfg *cfg, struct fix_server_arg *arg);
