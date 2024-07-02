// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZSmallTalkManager_generated_h
#error "SBZSmallTalkManager.generated.h already included, missing '#pragma once' in SBZSmallTalkManager.h"
#endif
#define STARBREEZE_SBZSmallTalkManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSmallTalkManager(); \
	friend struct Z_Construct_UClass_USBZSmallTalkManager_Statics; \
public: \
	DECLARE_CLASS(USBZSmallTalkManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSmallTalkManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSmallTalkManager(); \
	friend struct Z_Construct_UClass_USBZSmallTalkManager_Statics; \
public: \
	DECLARE_CLASS(USBZSmallTalkManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSmallTalkManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSmallTalkManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSmallTalkManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSmallTalkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSmallTalkManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSmallTalkManager(USBZSmallTalkManager&&); \
	NO_API USBZSmallTalkManager(const USBZSmallTalkManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSmallTalkManager(USBZSmallTalkManager&&); \
	NO_API USBZSmallTalkManager(const USBZSmallTalkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSmallTalkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSmallTalkManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSmallTalkManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SmallTalkCollections() { return STRUCT_OFFSET(USBZSmallTalkManager, SmallTalkCollections); } \
	FORCEINLINE static uint32 __PPO__PhoneSmallTalkCollections() { return STRUCT_OFFSET(USBZSmallTalkManager, PhoneSmallTalkCollections); } \
	FORCEINLINE static uint32 __PPO__ConversationNeededTags() { return STRUCT_OFFSET(USBZSmallTalkManager, ConversationNeededTags); } \
	FORCEINLINE static uint32 __PPO__PhoneNeededTags() { return STRUCT_OFFSET(USBZSmallTalkManager, PhoneNeededTags); } \
	FORCEINLINE static uint32 __PPO__SoloNeededTags() { return STRUCT_OFFSET(USBZSmallTalkManager, SoloNeededTags); } \
	FORCEINLINE static uint32 __PPO__SoloDialogInterval() { return STRUCT_OFFSET(USBZSmallTalkManager, SoloDialogInterval); } \
	FORCEINLINE static uint32 __PPO__MaxIterationPerTick() { return STRUCT_OFFSET(USBZSmallTalkManager, MaxIterationPerTick); } \
	FORCEINLINE static uint32 __PPO__MaxSearchDistance() { return STRUCT_OFFSET(USBZSmallTalkManager, MaxSearchDistance); } \
	FORCEINLINE static uint32 __PPO__CullingDistance() { return STRUCT_OFFSET(USBZSmallTalkManager, CullingDistance); } \
	FORCEINLINE static uint32 __PPO__MaxDistBetweenConversationPerformers() { return STRUCT_OFFSET(USBZSmallTalkManager, MaxDistBetweenConversationPerformers); } \
	FORCEINLINE static uint32 __PPO__MinAngleBetweenConversationPerformers() { return STRUCT_OFFSET(USBZSmallTalkManager, MinAngleBetweenConversationPerformers); } \
	FORCEINLINE static uint32 __PPO__MaxConcurrentPhone() { return STRUCT_OFFSET(USBZSmallTalkManager, MaxConcurrentPhone); } \
	FORCEINLINE static uint32 __PPO__MaxConcurrentSolo() { return STRUCT_OFFSET(USBZSmallTalkManager, MaxConcurrentSolo); } \
	FORCEINLINE static uint32 __PPO__MaxConcurrentConversation() { return STRUCT_OFFSET(USBZSmallTalkManager, MaxConcurrentConversation); } \
	FORCEINLINE static uint32 __PPO__ConversationCullingMap() { return STRUCT_OFFSET(USBZSmallTalkManager, ConversationCullingMap); } \
	FORCEINLINE static uint32 __PPO__PhoneCullingMap() { return STRUCT_OFFSET(USBZSmallTalkManager, PhoneCullingMap); } \
	FORCEINLINE static uint32 __PPO__SoloCullingMap() { return STRUCT_OFFSET(USBZSmallTalkManager, SoloCullingMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSmallTalkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSmallTalkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
