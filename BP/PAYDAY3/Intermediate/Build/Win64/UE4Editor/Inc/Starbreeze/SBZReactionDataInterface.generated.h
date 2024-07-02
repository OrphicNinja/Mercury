// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZReactionData;
#ifdef STARBREEZE_SBZReactionDataInterface_generated_h
#error "SBZReactionDataInterface.generated.h already included, missing '#pragma once' in SBZReactionDataInterface.h"
#endif
#define STARBREEZE_SBZReactionDataInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReactionData);


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReactionData);


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZReactionDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZReactionDataInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReactionDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReactionDataInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReactionDataInterface(USBZReactionDataInterface&&); \
	NO_API USBZReactionDataInterface(const USBZReactionDataInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZReactionDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReactionDataInterface(USBZReactionDataInterface&&); \
	NO_API USBZReactionDataInterface(const USBZReactionDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReactionDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReactionDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZReactionDataInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZReactionDataInterface(); \
	friend struct Z_Construct_UClass_USBZReactionDataInterface_Statics; \
public: \
	DECLARE_CLASS(USBZReactionDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReactionDataInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZReactionDataInterface() {} \
public: \
	typedef USBZReactionDataInterface UClassType; \
	typedef ISBZReactionDataInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZReactionDataInterface() {} \
public: \
	typedef USBZReactionDataInterface UClassType; \
	typedef ISBZReactionDataInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZReactionDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReactionDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
