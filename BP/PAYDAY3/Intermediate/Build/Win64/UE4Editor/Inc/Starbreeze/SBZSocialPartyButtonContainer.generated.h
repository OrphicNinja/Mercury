// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZPartyMember;
class USBZMenuButton;
#ifdef STARBREEZE_SBZSocialPartyButtonContainer_generated_h
#error "SBZSocialPartyButtonContainer.generated.h already included, missing '#pragma once' in SBZSocialPartyButtonContainer.h"
#endif
#define STARBREEZE_SBZSocialPartyButtonContainer_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPartyMember); \
	DECLARE_FUNCTION(execBuildPartyMembersList); \
	DECLARE_FUNCTION(execGetPartyMembers); \
	DECLARE_FUNCTION(execGetPartyMembersNum); \
	DECLARE_FUNCTION(execRefreshPanel); \
	DECLARE_FUNCTION(execRequestPartyLeave);


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPartyMember); \
	DECLARE_FUNCTION(execBuildPartyMembersList); \
	DECLARE_FUNCTION(execGetPartyMembers); \
	DECLARE_FUNCTION(execGetPartyMembersNum); \
	DECLARE_FUNCTION(execRefreshPanel); \
	DECLARE_FUNCTION(execRequestPartyLeave);


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_EVENT_PARMS \
	struct SBZSocialPartyButtonContainer_eventOnPartyButtonFocused_Parms \
	{ \
		USBZMenuButton* MenuButton; \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSocialPartyButtonContainer(); \
	friend struct Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics; \
public: \
	DECLARE_CLASS(USBZSocialPartyButtonContainer, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSocialPartyButtonContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSocialPartyButtonContainer(); \
	friend struct Z_Construct_UClass_USBZSocialPartyButtonContainer_Statics; \
public: \
	DECLARE_CLASS(USBZSocialPartyButtonContainer, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSocialPartyButtonContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSocialPartyButtonContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSocialPartyButtonContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSocialPartyButtonContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSocialPartyButtonContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSocialPartyButtonContainer(USBZSocialPartyButtonContainer&&); \
	NO_API USBZSocialPartyButtonContainer(const USBZSocialPartyButtonContainer&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSocialPartyButtonContainer(USBZSocialPartyButtonContainer&&); \
	NO_API USBZSocialPartyButtonContainer(const USBZSocialPartyButtonContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSocialPartyButtonContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSocialPartyButtonContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSocialPartyButtonContainer)


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_PartyMembers() { return STRUCT_OFFSET(USBZSocialPartyButtonContainer, Panel_PartyMembers); } \
	FORCEINLINE static uint32 __PPO__PartyMembers() { return STRUCT_OFFSET(USBZSocialPartyButtonContainer, PartyMembers); } \
	FORCEINLINE static uint32 __PPO__PartyMemberButtonWidgetClass() { return STRUCT_OFFSET(USBZSocialPartyButtonContainer, PartyMemberButtonWidgetClass); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSocialPartyButtonContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSocialPartyButtonContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
