set (
	BUILD_LIST_COMMON
    ./System/ system_dir
    ./Math/ math_dir
    ./Core/ core_dir
    ./Engine/ engine_dir
	
    ./Test/TestModule/ test_testmodule_dir
)


set ( BUILD_LIST_COMMON
        ${BUILD_LIST_COMMON}
    )
	
set ( BUILD_LIST_WINDOWS
	${BUILD_LIST_COMMON}
)