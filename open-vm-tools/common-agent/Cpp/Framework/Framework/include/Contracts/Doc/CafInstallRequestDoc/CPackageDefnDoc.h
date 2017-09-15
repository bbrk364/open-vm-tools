/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CPackageDefnDoc_h_
#define CPackageDefnDoc_h_

namespace Caf {

/// A simple container for objects of type PackageDefn
class CPackageDefnDoc {
public:
	CPackageDefnDoc() :
		_isInitialized(false) {}
	virtual ~CPackageDefnDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string startupAttachmentName,
		const std::string packageAttachmentName,
		const SmartPtrCAttachmentNameCollectionDoc attachmentNameCollection,
		const std::string arguments) {
		if (! _isInitialized) {
			_startupAttachmentName = startupAttachmentName;
			_packageAttachmentName = packageAttachmentName;
			_attachmentNameCollection = attachmentNameCollection;
			_arguments = arguments;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the StartupAttachmentName
	std::string getStartupAttachmentName() const {
		return _startupAttachmentName;
	}

	/// Accessor for the PackageAttachmentName
	std::string getPackageAttachmentName() const {
		return _packageAttachmentName;
	}

	/// Accessor for the AttachmentNameCollection
	SmartPtrCAttachmentNameCollectionDoc getSupportingAttachmentNameCollection() const {
		return _attachmentNameCollection;
	}

	/// Accessor for the Arguments
	std::string getArguments() const {
		return _arguments;
	}

private:
	bool _isInitialized;

	std::string _startupAttachmentName;
	std::string _packageAttachmentName;
	SmartPtrCAttachmentNameCollectionDoc _attachmentNameCollection;
	std::string _arguments;

private:
	CAF_CM_DECLARE_NOCOPY(CPackageDefnDoc);
};

CAF_DECLARE_SMART_POINTER(CPackageDefnDoc);

}

#endif