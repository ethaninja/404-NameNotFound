// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef CLAUDIA_ClaudiaGameMode_generated_h
#error "ClaudiaGameMode.generated.h already included, missing '#pragma once' in ClaudiaGameMode.h"
#endif
#define CLAUDIA_ClaudiaGameMode_generated_h

#define AClaudiaGameMode_EVENTPARMS
#define AClaudiaGameMode_RPC_WRAPPERS
#define AClaudiaGameMode_CALLBACK_WRAPPERS
#define AClaudiaGameMode_INCLASS \
	private: \
	static void StaticRegisterNativesAClaudiaGameMode(); \
	friend CLAUDIA_API class UClass* Z_Construct_UClass_AClaudiaGameMode(); \
	public: \
	DECLARE_CLASS(AClaudiaGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Claudia, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API AClaudiaGameMode(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(AClaudiaGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AClaudiaGameMode


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
AClaudiaGameMode_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	AClaudiaGameMode_RPC_WRAPPERS \
	AClaudiaGameMode_CALLBACK_WRAPPERS \
	AClaudiaGameMode_INCLASS \
public:

