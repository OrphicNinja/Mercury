// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkCallbackType : uint8;
class UAkCallbackInfo;
enum class ESBZEventReactorState : uint8;
#ifdef STARBREEZE_SBZAudioScreen_generated_h
#error "SBZAudioScreen.generated.h already included, missing '#pragma once' in SBZAudioScreen.h"
#endif
#define STARBREEZE_SBZAudioScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAudioEventComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAudioEventComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_EVENT_PARMS \
	struct SBZAudioScreen_eventBP_OnReactorStateChanged_Parms \
	{ \
		ESBZEventReactorState NewState; \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAudioScreen(); \
	friend struct Z_Construct_UClass_ASBZAudioScreen_Statics; \
public: \
	DECLARE_CLASS(ASBZAudioScreen, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAudioScreen) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAudioScreen*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZAudioScreen(); \
	friend struct Z_Construct_UClass_ASBZAudioScreen_Statics; \
public: \
	DECLARE_CLASS(ASBZAudioScreen, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAudioScreen) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAudioScreen*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAudioScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAudioScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAudioScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAudioScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAudioScreen(ASBZAudioScreen&&); \
	NO_API ASBZAudioScreen(const ASBZAudioScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAudioScreen(ASBZAudioScreen&&); \
	NO_API ASBZAudioScreen(const ASBZAudioScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAudioScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAudioScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAudioScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AkComponent() { return STRUCT_OFFSET(ASBZAudioScreen, AkComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentRoom() { return STRUCT_OFFSET(ASBZAudioScreen, CurrentRoom); } \
	FORCEINLINE static uint32 __PPO__CurrentReactorState() { return STRUCT_OFFSET(ASBZAudioScreen, CurrentReactorState); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAudioScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAudioScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
