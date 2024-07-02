// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsGroupInformation;
struct FAccelByteModelsGetGroupListResponse;
struct FAccelByteModelsCreateGroupRequest;
enum class EAccelByteAllowedAction : uint8;
struct FAccelByteModelsGetGroupListRequest;
struct FAccelByteModelsGroupUpdatable;
struct FAccelByteModelsUpdateGroupCustomAttributesRequest;
struct FAccelByteModelsUpdateCustomRulesRequest;
struct FAccelByteModelsUpdateGroupPredefinedRuleRequest;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsGroup_generated_h
#error "AccelByteBlueprintsGroup.generated.h already included, missing '#pragma once' in AccelByteBlueprintsGroup.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsGroup_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_28_DELEGATE \
struct AccelByteBlueprintsGroup_eventCreateGroupSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Result; \
}; \
static inline void FCreateGroupSuccess_DelegateWrapper(const FScriptDelegate& CreateGroupSuccess, FAccelByteModelsGroupInformation const& Result) \
{ \
	AccelByteBlueprintsGroup_eventCreateGroupSuccess_Parms Parms; \
	Parms.Result=Result; \
	CreateGroupSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_27_DELEGATE \
static inline void FDeleteGroupPredefinedRuleSuccess_DelegateWrapper(const FScriptDelegate& DeleteGroupPredefinedRuleSuccess) \
{ \
	DeleteGroupPredefinedRuleSuccess.ProcessDelegate<UObject>(NULL); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_26_DELEGATE \
static inline void FDeleteGroupSuccess_DelegateWrapper(const FScriptDelegate& DeleteGroupSuccess) \
{ \
	DeleteGroupSuccess.ProcessDelegate<UObject>(NULL); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_25_DELEGATE \
struct AccelByteBlueprintsGroup_eventGetGroupSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Result; \
}; \
static inline void FGetGroupSuccess_DelegateWrapper(const FScriptDelegate& GetGroupSuccess, FAccelByteModelsGroupInformation const& Result) \
{ \
	AccelByteBlueprintsGroup_eventGetGroupSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetGroupSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_24_DELEGATE \
struct AccelByteBlueprintsGroup_eventSearchGroupsSuccess_Parms \
{ \
	FAccelByteModelsGetGroupListResponse Result; \
}; \
static inline void FSearchGroupsSuccess_DelegateWrapper(const FScriptDelegate& SearchGroupsSuccess, FAccelByteModelsGetGroupListResponse const& Result) \
{ \
	AccelByteBlueprintsGroup_eventSearchGroupsSuccess_Parms Parms; \
	Parms.Result=Result; \
	SearchGroupsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_23_DELEGATE \
struct AccelByteBlueprintsGroup_eventUpdateGroupCustomAttributesSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Result; \
}; \
static inline void FUpdateGroupCustomAttributesSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupCustomAttributesSuccess, FAccelByteModelsGroupInformation const& Result) \
{ \
	AccelByteBlueprintsGroup_eventUpdateGroupCustomAttributesSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateGroupCustomAttributesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_22_DELEGATE \
struct AccelByteBlueprintsGroup_eventUpdateGroupCustomRuleSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Result; \
}; \
static inline void FUpdateGroupCustomRuleSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupCustomRuleSuccess, FAccelByteModelsGroupInformation const& Result) \
{ \
	AccelByteBlueprintsGroup_eventUpdateGroupCustomRuleSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateGroupCustomRuleSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_21_DELEGATE \
struct AccelByteBlueprintsGroup_eventUpdateGroupPredefinedRuleSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Result; \
}; \
static inline void FUpdateGroupPredefinedRuleSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupPredefinedRuleSuccess, FAccelByteModelsGroupInformation const& Result) \
{ \
	AccelByteBlueprintsGroup_eventUpdateGroupPredefinedRuleSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateGroupPredefinedRuleSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_20_DELEGATE \
struct AccelByteBlueprintsGroup_eventUpdateGroupSuccess_Parms \
{ \
	FAccelByteModelsGroupInformation Result; \
}; \
static inline void FUpdateGroupSuccess_DelegateWrapper(const FScriptDelegate& UpdateGroupSuccess, FAccelByteModelsGroupInformation const& Result) \
{ \
	AccelByteBlueprintsGroup_eventUpdateGroupSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateGroupSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execDeleteGroupPredefinedRule); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execGetGroupList); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execUpdateGroupCustomAttributes); \
	DECLARE_FUNCTION(execUpdateGroupCustomRule); \
	DECLARE_FUNCTION(execUpdateGroupPredefinedRule);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execDeleteGroupPredefinedRule); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execGetGroupList); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execUpdateGroupCustomAttributes); \
	DECLARE_FUNCTION(execUpdateGroupCustomRule); \
	DECLARE_FUNCTION(execUpdateGroupPredefinedRule);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsGroup(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsGroup_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsGroup, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsGroup)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsGroup(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsGroup_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsGroup, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsGroup)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsGroup(UAccelByteBlueprintsGroup&&); \
	NO_API UAccelByteBlueprintsGroup(const UAccelByteBlueprintsGroup&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsGroup(UAccelByteBlueprintsGroup&&); \
	NO_API UAccelByteBlueprintsGroup(const UAccelByteBlueprintsGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsGroup)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_16_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
