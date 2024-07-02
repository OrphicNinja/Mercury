// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZSpawnClosetReactorInterface_generated_h
#error "SBZSpawnClosetReactorInterface.generated.h already included, missing '#pragma once' in SBZSpawnClosetReactorInterface.h"
#endif
#define STARBREEZE_SBZSpawnClosetReactorInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_RPC_WRAPPERS \
	virtual void ReactToCloset_Implementation(bool bActorsInCloset, bool bDoCosmetics) {}; \
 \
	DECLARE_FUNCTION(execReactToCloset);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReactToCloset_Implementation(bool bActorsInCloset, bool bDoCosmetics) {}; \
 \
	DECLARE_FUNCTION(execReactToCloset);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_EVENT_PARMS \
	struct SBZSpawnClosetReactorInterface_eventReactToCloset_Parms \
	{ \
		bool bActorsInCloset; \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSpawnClosetReactorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSpawnClosetReactorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnClosetReactorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnClosetReactorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnClosetReactorInterface(USBZSpawnClosetReactorInterface&&); \
	NO_API USBZSpawnClosetReactorInterface(const USBZSpawnClosetReactorInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSpawnClosetReactorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnClosetReactorInterface(USBZSpawnClosetReactorInterface&&); \
	NO_API USBZSpawnClosetReactorInterface(const USBZSpawnClosetReactorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnClosetReactorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnClosetReactorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSpawnClosetReactorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZSpawnClosetReactorInterface(); \
	friend struct Z_Construct_UClass_USBZSpawnClosetReactorInterface_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnClosetReactorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnClosetReactorInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZSpawnClosetReactorInterface() {} \
public: \
	typedef USBZSpawnClosetReactorInterface UClassType; \
	typedef ISBZSpawnClosetReactorInterface ThisClass; \
	static void Execute_ReactToCloset(UObject* O, bool bActorsInCloset, bool bDoCosmetics); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZSpawnClosetReactorInterface() {} \
public: \
	typedef USBZSpawnClosetReactorInterface UClassType; \
	typedef ISBZSpawnClosetReactorInterface ThisClass; \
	static void Execute_ReactToCloset(UObject* O, bool bActorsInCloset, bool bDoCosmetics); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSpawnClosetReactorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnClosetReactorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
