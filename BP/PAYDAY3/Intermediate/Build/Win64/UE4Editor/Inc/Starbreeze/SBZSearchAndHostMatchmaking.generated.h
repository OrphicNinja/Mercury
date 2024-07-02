// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_SBZSearchAndHostMatchmaking_generated_h
#error "SBZSearchAndHostMatchmaking.generated.h already included, missing '#pragma once' in SBZSearchAndHostMatchmaking.h"
#endif
#define STARBREEZE_SBZSearchAndHostMatchmaking_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToHost);


#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLostConnectionToHost);


#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSearchAndHostMatchmaking(); \
	friend struct Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics; \
public: \
	DECLARE_CLASS(USBZSearchAndHostMatchmaking, USBZMatchmaking, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSearchAndHostMatchmaking) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSearchAndHostMatchmaking(); \
	friend struct Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics; \
public: \
	DECLARE_CLASS(USBZSearchAndHostMatchmaking, USBZMatchmaking, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSearchAndHostMatchmaking) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSearchAndHostMatchmaking(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSearchAndHostMatchmaking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSearchAndHostMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSearchAndHostMatchmaking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSearchAndHostMatchmaking(USBZSearchAndHostMatchmaking&&); \
	NO_API USBZSearchAndHostMatchmaking(const USBZSearchAndHostMatchmaking&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSearchAndHostMatchmaking(USBZSearchAndHostMatchmaking&&); \
	NO_API USBZSearchAndHostMatchmaking(const USBZSearchAndHostMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSearchAndHostMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSearchAndHostMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSearchAndHostMatchmaking)


#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxSearchesPerRequest() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, MaxSearchesPerRequest); } \
	FORCEINLINE static uint32 __PPO__RepeatSearchDelayMin() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, RepeatSearchDelayMin); } \
	FORCEINLINE static uint32 __PPO__RepeatSearchDelayMax() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, RepeatSearchDelayMax); } \
	FORCEINLINE static uint32 __PPO__LostConnectionDelayMin() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, LostConnectionDelayMin); } \
	FORCEINLINE static uint32 __PPO__LostConnectionDelayMax() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, LostConnectionDelayMax); } \
	FORCEINLINE static uint32 __PPO__PowerLevelDeltaSmall() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, PowerLevelDeltaSmall); } \
	FORCEINLINE static uint32 __PPO__PowerLevelDeltaMedium() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, PowerLevelDeltaMedium); } \
	FORCEINLINE static uint32 __PPO__bPartyDropInEnabled() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, bPartyDropInEnabled); } \
	FORCEINLINE static uint32 __PPO__DelayTimer() { return STRUCT_OFFSET(USBZSearchAndHostMatchmaking, DelayTimer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_8_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSearchAndHostMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSearchAndHostMatchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
