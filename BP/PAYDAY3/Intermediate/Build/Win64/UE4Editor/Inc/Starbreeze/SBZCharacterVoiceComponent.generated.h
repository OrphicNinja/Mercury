// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPlayerCallEvent;
class UActorComponent;
class USBZVoiceCommentDataAsset;
enum class ESBZVoicePriority : uint8;
class UAkAudioEvent;
struct FSBZVoiceEventData;
enum class ESBZVoiceGruntType : uint8;
#ifdef STARBREEZE_SBZCharacterVoiceComponent_generated_h
#error "SBZCharacterVoiceComponent.generated.h already included, missing '#pragma once' in SBZCharacterVoiceComponent.h"
#endif
#define STARBREEZE_SBZCharacterVoiceComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_RPC_WRAPPERS \
	virtual void Multicast_SaySystemComment_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority); \
	virtual void Multicast_SaySystemComment_ServerInstigated_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority); \
	virtual bool Server_SaySystemComment_Validate(const USBZVoiceCommentDataAsset* , ESBZVoicePriority , bool ); \
	virtual void Server_SaySystemComment_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bServerInstigated); \
 \
	DECLARE_FUNCTION(execCallRecieved); \
	DECLARE_FUNCTION(execHandleAudioComponentActivated); \
	DECLARE_FUNCTION(execHandleAudioComponentDeactivated); \
	DECLARE_FUNCTION(execMulticast_SaySystemComment); \
	DECLARE_FUNCTION(execMulticast_SaySystemComment_ServerInstigated); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnStaminaValueChanged); \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execSay); \
	DECLARE_FUNCTION(execSayCharacterEvent); \
	DECLARE_FUNCTION(execSayDialogLine); \
	DECLARE_FUNCTION(execSayDialogLineByCharacterEvent); \
	DECLARE_FUNCTION(execSayGrunt); \
	DECLARE_FUNCTION(execSaySystemComment); \
	DECLARE_FUNCTION(execServer_SaySystemComment); \
	DECLARE_FUNCTION(execStopTalking);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SaySystemComment_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority); \
	virtual void Multicast_SaySystemComment_ServerInstigated_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority); \
	virtual bool Server_SaySystemComment_Validate(const USBZVoiceCommentDataAsset* , ESBZVoicePriority , bool ); \
	virtual void Server_SaySystemComment_Implementation(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bServerInstigated); \
 \
	DECLARE_FUNCTION(execCallRecieved); \
	DECLARE_FUNCTION(execHandleAudioComponentActivated); \
	DECLARE_FUNCTION(execHandleAudioComponentDeactivated); \
	DECLARE_FUNCTION(execMulticast_SaySystemComment); \
	DECLARE_FUNCTION(execMulticast_SaySystemComment_ServerInstigated); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnStaminaValueChanged); \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execSay); \
	DECLARE_FUNCTION(execSayCharacterEvent); \
	DECLARE_FUNCTION(execSayDialogLine); \
	DECLARE_FUNCTION(execSayDialogLineByCharacterEvent); \
	DECLARE_FUNCTION(execSayGrunt); \
	DECLARE_FUNCTION(execSaySystemComment); \
	DECLARE_FUNCTION(execServer_SaySystemComment); \
	DECLARE_FUNCTION(execStopTalking);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_EVENT_PARMS \
	struct SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_Parms \
	{ \
		const USBZVoiceCommentDataAsset* CommentDataAsset; \
		ESBZVoicePriority InPlayingPriority; \
	}; \
	struct SBZCharacterVoiceComponent_eventMulticast_SaySystemComment_ServerInstigated_Parms \
	{ \
		const USBZVoiceCommentDataAsset* CommentDataAsset; \
		ESBZVoicePriority InPlayingPriority; \
	}; \
	struct SBZCharacterVoiceComponent_eventServer_SaySystemComment_Parms \
	{ \
		const USBZVoiceCommentDataAsset* CommentDataAsset; \
		ESBZVoicePriority InPlayingPriority; \
		bool bServerInstigated; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterVoiceComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterVoiceComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterVoiceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterVoiceComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterVoiceComponent(); \
	friend struct Z_Construct_UClass_USBZCharacterVoiceComponent_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterVoiceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterVoiceComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterVoiceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterVoiceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterVoiceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterVoiceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterVoiceComponent(USBZCharacterVoiceComponent&&); \
	NO_API USBZCharacterVoiceComponent(const USBZCharacterVoiceComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterVoiceComponent(USBZCharacterVoiceComponent&&); \
	NO_API USBZCharacterVoiceComponent(const USBZCharacterVoiceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterVoiceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterVoiceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterVoiceComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SBZCharacterOwner() { return STRUCT_OFFSET(USBZCharacterVoiceComponent, SBZCharacterOwner); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(USBZCharacterVoiceComponent, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__PerformsInDialog() { return STRUCT_OFFSET(USBZCharacterVoiceComponent, PerformsInDialog); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_24_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterVoiceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterVoiceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
